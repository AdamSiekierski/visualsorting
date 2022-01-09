//
//  InfoBar.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 08/01/2022.
//  Copyright © 2022 Adam Siekierski. All rights reserved.
//

#ifndef InfoBar_hpp
#define InfoBar_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "Algorithms.hpp"
#include "constants.hpp"

namespace GUI {
    void render_info_bar(sf::RenderWindow* window, sf::Font* font, Algorithms::Algorithm alg, int read, int swap);
}

#endif /* InfoBar_hpp */
