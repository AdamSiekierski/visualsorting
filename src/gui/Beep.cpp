//
//  Beep.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 02/01/2022.
//  Copyright © 2022 Adam Siekierski. All rights reserved.
//

#include "Beep.hpp"

void GUI::create_beep(sf::SoundBuffer* buffer, sf::Sound* sound) {
    const unsigned SAMPLES = 44100;
    const unsigned SAMPLE_RATE = 44100;
    const unsigned AMPLITUDE = 30000;
    const double TWO_PI = 6.28318;
    const double increment = 440./44100;
    
    sf::Int16 raw[SAMPLES];
    double x = 0;
    for (unsigned i = 0; i < SAMPLES; i++) {
        raw[i] = AMPLITUDE * sin(x * TWO_PI);
        x += increment;
    }
    
    buffer->loadFromSamples(raw, SAMPLES, 1, SAMPLE_RATE);
    
    sound->setBuffer(*buffer);
    sound->setLoop(true);
    sound->play();
}

float GUI::get_beep_pitch(int val) {
    return 0.75 - (val / 4000.0);
}
