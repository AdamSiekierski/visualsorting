//
//  HeapSort.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "HeapSort.hpp"

namespace HeapSort {
    void heap(std::vector<int>& vec, int i, int size) {
        int largest;
        int l = (2 * i) + 1;
        int r = l + 1;

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
            heap(vec, largest, size);
        }
    }

    void initial_heap(std::vector<int>& vec) {
        for(int i = (vec.size() / 2); i >= 0; i--) {
            heap(vec, i, vec.size());
        }
    }
}

std::vector<int> Algorithms::heap_sort(std::vector<int> vec) {
   HeapSort::initial_heap(vec);

   int size = vec.size();

   for (int i = vec.size() - 1; i > 0; i--) {
        std::swap(vec[0], vec[i]);
        size--;
        HeapSort::heap(vec, 0, size);
    }

    return vec;
}
