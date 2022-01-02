//
//  Beep.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 02/01/2022.
//  Copyright © 2022 Adam Siekierski. All rights reserved.
//

#ifndef Beep_hpp
#define Beep_hpp

#include <stdio.h>
#include <SFML/Audio.hpp>
#include <cmath>
#include <iostream>

namespace GUI {
    float get_beep_pitch(int val);
    void create_beep(sf::SoundBuffer* buffer, sf::Sound* sound);
}

#endif /* Beep_hpp */
