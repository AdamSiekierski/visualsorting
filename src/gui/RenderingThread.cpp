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
    
    Algorithms::sort_with(p.alg, &p.vec, [&](std::vector<int>* vec, int curr) {
        GUI::render_vector_lines(vec, window, curr);
        
        sf::sleep(sf::milliseconds(Algorithms::sleep_for_algorithm(p.alg)));
        
        window->display();
    });
}
