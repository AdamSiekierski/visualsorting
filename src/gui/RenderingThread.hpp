//
//  RenderingThread.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 25/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef RenderingThread_hpp
#define RenderingThread_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#include "ResourcePath.hpp"

namespace GUI {
    void rendering_thread(sf::RenderWindow* window);
}

#endif /* RenderingThread_hpp */
