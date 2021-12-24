//
//  BubbleSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "BubbleSort.hpp"

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

std::vector<int> Algorithms::bubble_sort(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec.size() - 1; j++) {
            if (vec[j] > vec[j+1]) {
                swap(&vec[j], &vec[j+1]);
            }
        }
    }
    
    return vec;
}
