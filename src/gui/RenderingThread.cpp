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
    sf::Text text("test", font, 50);
    text.setFillColor(sf::Color::Black);

    while (window->isOpen()) {
        window->clear(sf::Color::White);

        window->draw(text);
        
        window->display();
    }
}
