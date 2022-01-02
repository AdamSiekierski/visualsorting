//
//  main.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>

#include "ResourcePath.hpp"

#include "Algorithms.hpp"
#include "Utils.hpp"
#include "GUI.hpp"

#include "constants.hpp"

int main(int, char const**) {
    Algorithms::Algorithm alg = GUI::select_alogrithm();
    
    std::vector<int> vec = Utils::random_vector(VECTOR_LEN, 1, WINDOW_H);

    sf::RenderWindow window(sf::VideoMode(WINDOW_W, WINDOW_H), "VisualSorting");

    window.setActive(false);
    
    GUI::RenderingThreadParams p = { &window, vec, alg };
    sf::Thread thread(&GUI::rendering_thread, p);
    thread.launch();

    GUI::event_loop(&window);

    return EXIT_SUCCESS;
}
