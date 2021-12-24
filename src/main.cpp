//
//  main.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>

#include "ResourcePath.hpp"

#include "Algorithms.hpp"
#include "Utils.hpp"

#define LENGTH 50
#define MIN 1
#define MAX 99

int main(int, char const**)
{
    std::vector<int> shuffled = Utils::random_vector(LENGTH, MIN, MAX);
    
    std::vector<int> sorted = Algorithms::insertion_sort(shuffled);
    
    std::cout << Utils::print_vector(shuffled);
    std::cout << Utils::print_vector(sorted);
    
    return 0;
}
