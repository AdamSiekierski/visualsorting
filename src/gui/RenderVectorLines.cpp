//
//  RenderVectorLines.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 26/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "RenderVectorLines.hpp"

sf::RectangleShape create_line(int pos, int h, int w, bool isCurr) {
    sf::RectangleShape rect(sf::Vector2f(w, h));
    
    rect.move(pos * w, 0);
    rect.setFillColor(isCurr ? sf::Color::Red : sf::Color::Black);
    
    return rect;
}

void GUI::render_vector_lines(std::vector<int>* vec, sf::RenderWindow* window, int curr) {
    window->clear(sf::Color::White);
    
    sf::Vector2<unsigned int> windowSize = window->getSize();
    
    for (int i = 0; i < vec->size(); i++) {
        sf::RectangleShape line = create_line(i, vec->at(i), windowSize.x / vec->size(), i == curr);
        window->draw(line);
    }
}

