//
//  RenderVectorLines.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 26/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef RenderVectorLines_hpp
#define RenderVectorLines_hpp

#include <stdio.h>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

namespace GUI {
    void render_vector_lines(std::vector<int>* vec, sf::RenderWindow* window, int curr);
    void render_vector_lines(std::vector<int>* vec, sf::RenderWindow* window);
}

#endif /* RenderVectorLines_hpp */
