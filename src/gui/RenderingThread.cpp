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

void GUI::rendering_thread(GUI::RenderingThreadParams p) {
    sf::RenderWindow* window = p.window;

    window->setActive(true);

    sf::SoundBuffer beepBuffer;
    sf::Sound beepSound;

    GUI::create_beep(&beepBuffer, &beepSound);

    std::vector<int> sorted = Algorithms::sort_with(p.alg, &p.vec, [&](std::vector<int>* vec, int curr) {
        GUI::render_vector_lines(vec, window, curr);
        window->display();

        beepSound.setPitch(GUI::get_beep_pitch((*vec)[curr]));

        sf::sleep(sf::milliseconds(Algorithms::sleep_for_algorithm(p.alg)));
    });

    for (int i = 0; i < sorted.size(); i++) {
        GUI::render_vector_lines(&sorted, window, i);
        window->display();

        beepSound.setPitch(GUI::get_beep_pitch(sorted[i]));

        sf::sleep(sf::milliseconds(10));
    }

    beepSound.stop();
    beepSound.setPitch(1);

    GUI::render_vector_lines(&sorted, window);
    window->display();

    short_beep(&beepSound);
    short_beep(&beepSound);
    short_beep(&beepSound);
}
