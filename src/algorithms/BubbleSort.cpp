//
//  BubbleSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "BubbleSort.hpp"

std::vector<int> Algorithms::bubble_sort(std::vector<int> vec, Algorithms::StepCallback step) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size() - 1; j++) {
            step(&vec, j, 0, 0);
            
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
            }
            
            step(&vec, j + 1, 2, 1);
        }
    }
    
    return vec;
}
