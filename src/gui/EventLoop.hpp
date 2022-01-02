//
//  EventLoop.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 25/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef EventLoop_hpp
#define EventLoop_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

namespace GUI {
    void event_loop(sf::RenderWindow* window, sf::Thread* thread);
}

#endif /* EventLoop_hpp */
