//
//  QuickSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "QuickSort.hpp"

namespace QuickSort {
    int partition(std::vector<int> &vec, int start, int end){
        int pivot = end;
        int j = start;
        
        for (int i = start; i < end; ++i) {
            if (vec[i] < vec[pivot]) {
                std::swap(vec[i], vec[j]);
                
                ++j;
            }
        }

        std::swap(vec[j], vec[pivot]);

        return j;
    }

    void quick_sort_iter(std::vector<int> &vec, int start, int end) {
        if (start < end){
            int part = partition(vec, start, end);

            quick_sort_iter(vec, start, part - 1);
            quick_sort_iter(vec, part + 1, end);
        }
        
        return vec;
    }
}

std::vector<int> Algorithms::quick_sort(std::vector<int> vec) {
    QuickSort::quick_sort_iter(vec, 0, vec.size() - 1);
    
    return vec;
}
