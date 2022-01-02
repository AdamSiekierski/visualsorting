//
//  RenderingThread.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 25/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "RenderingThread.hpp"

void GUI::rendering_thread(GUI::RenderingThreadParams p) {
    sf::RenderWindow* window = p.window;
    
    window->setActive(true);
    
    sf::SoundBuffer beepBuffer;
    sf::Sound beepSound;
    
    GUI::create_beep(&beepBuffer, &beepSound);
    
    std::vector<int> sorted = Algorithms::sort_with(p.alg, &p.vec, [&](std::vector<int>* vec, int curr) {
        GUI::render_vector_lines(vec, window, curr);
        
        beepSound.setPitch(GUI::get_beep_pitch((*vec)[curr]));
        
        sf::sleep(sf::milliseconds(Algorithms::sleep_for_algorithm(p.alg)));
        
        window->display();
    });
    
    for (int i = 0; i < sorted.size(); i++) {
        GUI::render_vector_lines(&sorted, window, i);
        
        beepSound.setPitch(GUI::get_beep_pitch(sorted[i]));
        
        sf::sleep(sf::milliseconds(10));
        
        window->display();
    }
    
    beepSound.stop();
    
    GUI::render_vector_lines(&sorted, window, sorted.size());
}
