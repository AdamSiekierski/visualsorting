//
//  QuickSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "QuickSort.hpp"

namespace QuickSort {
    int partition(std::vector<int> &vec, int start, int end, Algorithms::StepCallback step) {
        int pivot = end;
        int j = start;
        
        for (int i = start; i < end; ++i) {
            step(&vec, i, 0, 0);
            
            if (vec[i] < vec[pivot]) {
                std::swap(vec[i], vec[j]);

                ++j;
            }
            
            step(&vec, j, 2, 1);
        }
        
        step(&vec, j, 0, 0);

        std::swap(vec[j], vec[pivot]);
        
        step(&vec, pivot, 0, 1);

        return j;
    }

    void quick_sort_iter(std::vector<int> &vec, int start, int end, Algorithms::StepCallback step) {
        if (start < end){
            int part = partition(vec, start, end, step);

            quick_sort_iter(vec, start, part - 1, step);
            quick_sort_iter(vec, part + 1, end, step);
        }
        
        return vec;
    }
}

std::vector<int> Algorithms::quick_sort(std::vector<int> vec, Algorithms::StepCallback step) {
    QuickSort::quick_sort_iter(vec, 0, vec.size() - 1, step);
    
    return vec;
}
