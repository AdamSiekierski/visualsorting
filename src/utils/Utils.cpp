//
//  Utils.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "Utils.hpp"

std::vector<int> Utils::random_vector(int len, int min, int max) {
    std::vector<int> vector;

    srand(time(NULL));

    for (int i = 0; i < len; i++) {
        vector.push_back(Utils::random_number(min, max));
    }

    return vector;
}

int Utils::random_number(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

std::string Utils::print_vector(std::vector<int> vec) {
    std::stringstream result;
    
    result << "{ ";
    
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(result, ", "));
    
    result << "}\n";
    
    return result.str();
}
