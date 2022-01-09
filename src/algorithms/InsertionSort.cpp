//
//  InsertionSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "InsertionSort.hpp"

std::vector<int> Algorithms::insertion_sort(std::vector<int> vec, Algorithms::StepCallback step) {
    for (int j = 1; j < vec.size(); j++) {
        step(&vec, j, 1, 1);
        
        int k = vec[j];
        int i = j - 1;

        while (i >= 0 && vec[i] > k) {
            step(&vec, i, 1, 1);
            
            vec[i + 1] = vec[i];

            i--;
        }
        
        vec[i + 1] = k;
    }
    
    return vec;
}
