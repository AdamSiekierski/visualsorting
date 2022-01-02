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
    window->clear(sf::Color::White);
    
    render_vector_lines(p.vec, window);
    
    window->display();
}
