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
#include <thread>

#include "GUI.hpp"
#include "Utils.hpp"
#include "Algorithms.hpp"
#include "Utils.hpp"

namespace GUI {
    struct RenderingThreadParams {
        sf::RenderWindow* window;
        std::vector<int> vec;
        Algorithms::Algorithm alg;
    };

    void rendering_thread(RenderingThreadParams p);
}

#endif /* RenderingThread_hpp */
