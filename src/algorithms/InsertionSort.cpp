//
//  InsertionSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "InsertionSort.hpp"

std::vector<int> Algorithms::insertion_sort(std::vector<int> vec) {
    for (int j = 1; j < vec.size(); j++) {
        int k = vec[j];
        int i = j - 1;

        while(i >= 0 && vec[i] > k) {
            vec[i + 1] = vec[i];

            i--;
        }
        
        vec[i + 1] = k;
    }
    
    return vec;
}
