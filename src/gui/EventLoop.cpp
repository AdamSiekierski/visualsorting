//
//  EventLoop.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 25/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "EventLoop.hpp"

void GUI::event_loop(sf::RenderWindow* window, sf::Thread* thread) {
    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window->close();
                thread->terminate();
            }
        }
    }
}
