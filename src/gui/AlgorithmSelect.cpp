//
//  AlgorithmSelect.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 26/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "AlgorithmSelect.hpp"

Algorithms::Algorithm GUI::select_alogrithm() {
    std::cout << "VisualSorting\n\nAvailable algorithms:\n1. Bubble sort\n2. Heap sort\n3. Insertion sort\n4. Quick sort\n\nPlease select algorithm (1-4): ";
    
    int algorithm;
    std::cin >> algorithm;
    
    switch (algorithm) {
        case 1: return Algorithms::BUBBLE;
        case 2: return Algorithms::HEAP;
        case 3: return Algorithms::INSERTION;
        case 4: return Algorithms::QUICK;
        default: return Algorithms::NONE;
    }
}

