//
//  RenderingThread.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 25/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "RenderingThread.hpp"

void GUI::rendering_thread(sf::RenderWindow* window) {
    window->setActive(true);
    
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("kutas", font, 50);
    text.setFillColor(sf::Color::White);

    while (window->isOpen()) {
        window->clear();

        window->draw(text);
        
        window->display();
    }
}
