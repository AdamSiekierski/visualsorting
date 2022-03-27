//
//  HeapSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "HeapSort.hpp"

namespace HeapSort {
    void heapify(std::vector<int>& vec, int i, int size, Algorithms::StepCallback step) {
        int largest;
        int l = (2 * i) + 1;
        int r = l + 1;
    
        step(&vec, i, 0, 0);

        if (l < size && vec[l] > vec[i]) {
            largest = l;
        } else {
            largest = i;
        }
        
        if (r < size && vec[r] > vec[largest]) {
            largest = r;
        }

        if (largest != i) {
            std::swap(vec[i], vec[largest]);
            heapify(vec, largest, size, step);
        }
        
        step(&vec, largest, 4, 1);
    }

    void initial_heapify(std::vector<int>& vec, Algorithms::StepCallback step) {
        for (int i = (vec.size() / 2); i >= 0; i--) {
            heapify(vec, i, vec.size(), step);
        }
    }
}

std::vector<int> Algorithms::heap_sort(std::vector<int> vec, Algorithms::StepCallback step) {
    HeapSort::initial_heapify(vec, step);

    int size = vec.size();

    for (int i = vec.size() - 1; i > 0; i--) {
        step(&vec, 0, 0, 0);
       
        std::swap(vec[0], vec[i]);
       
        step(&vec, i, 0, 1);
        size--;
        HeapSort::heapify(vec, 0, size, step);
    }

    return vec;
}
