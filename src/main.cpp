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

#define LENGTH 50
#define MIN 1
#define MAX 99

int main(int, char const**) {
    Algorithms::Algorithm alg = GUI::select_alogrithm();

    //    sf::RenderWindow window(sf::VideoMode(800, 600), "VisualSorting");
    //
    //    window.setActive(false);
    //
    //    sf::Thread thread(&GUI::rendering_thread, &window);
    //    thread.launch();
    //
    //    GUI::event_loop(&window);
        

    return EXIT_SUCCESS;
}
