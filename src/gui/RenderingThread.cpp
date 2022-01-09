//
//  RenderingThread.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 25/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "RenderingThread.hpp"

void short_beep(sf::Sound* sound) {
    sf::sleep(sf::milliseconds(100));
    sound->play();
    sf::sleep(sf::milliseconds(100));
    sound->stop();
}

void frame(sf::RenderWindow* window, std::function<void()> func) {
    if (window != NULL) {
        window->clear(sf::Color::White);
        
        func();
        
        window->display();
    }
}

void GUI::rendering_thread(GUI::RenderingThreadParams p) {
    sf::RenderWindow* window = p.window;

    window->setActive(true);

    sf::SoundBuffer beepBuffer;
    sf::Sound beepSound;
    GUI::create_beep(&beepBuffer, &beepSound);
    
    sf::Font arial;
    if (!arial.loadFromFile(Utils::resourcePath() + "arial.ttf")) {
        std::cout << "Could not load font arial\n";
    }
    
    int reads = 0;
    int writes = 0;

    std::vector<int> sorted = Algorithms::sort_with(p.alg, &p.vec, [&](std::vector<int>* vec, int curr, int newReads, int newWrites) {
        reads += newReads;
        writes += newWrites;
        
        frame(window, [&]() {
            GUI::render_info_bar(window, &arial, p.alg, reads, writes);
            GUI::render_vector_lines(vec, window, curr);
        });

        beepSound.setPitch(GUI::get_beep_pitch((*vec)[curr]));

        sf::sleep(sf::milliseconds(Algorithms::sleep_for_algorithm(p.alg)));
    });

    for (int i = 0; i < sorted.size(); i++) {
        frame(window, [&]() {
            GUI::render_info_bar(window, &arial, p.alg, reads, writes);
            GUI::render_vector_lines(&sorted, window, i);
        });

        beepSound.setPitch(GUI::get_beep_pitch(sorted[i]));

        sf::sleep(sf::milliseconds(10));
    }

    beepSound.stop();
    beepSound.setPitch(1);

    frame(window, [&]() {
        GUI::render_info_bar(window, &arial, p.alg, reads, writes);
        GUI::render_vector_lines(&sorted, window);
    });

    short_beep(&beepSound);
    short_beep(&beepSound);
    short_beep(&beepSound);
}
