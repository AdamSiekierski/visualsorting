//
//  InfoBar.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 08/01/2022.
//  Copyright © 2022 Adam Siekierski. All rights reserved.
//

#include "InfoBar.hpp"

void GUI::render_info_bar(sf::RenderWindow* window, sf::Font* font, Algorithms::Algorithm alg, int read, int swap) {
    sf::RectangleShape rectangle(sf::Vector2f(WINDOW_W, WINDOW_H - VECTOR_MAX));
    rectangle.move(0, 0);
    rectangle.setFillColor(sf::Color::Black);
    
    window->draw(rectangle);

    sf::Text text;
    text.setFont(*font);
    text.setString("Algorithm: " + Algorithms::name_for_algorithm(alg) + ", Delay: " + std::to_string(Algorithms::sleep_for_algorithm(alg)) + "ms, Read operations: " + std::to_string(read) + ", Swap/write operations: " + std::to_string(swap));
    text.setCharacterSize(25);

    window->draw(text);
}
