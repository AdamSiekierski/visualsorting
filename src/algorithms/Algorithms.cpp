//
//  Algorithms.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "Algorithms.hpp"

std::vector<int> Algorithms::sort_with(Algorithms::Algorithm a, std::vector<int>* vec, std::function<void(std::vector<int>*, int, int, int)> step) {
    
    switch (a) {
        case Algorithms::BUBBLE:
            return Algorithms::bubble_sort(*vec, step);
        case Algorithms::HEAP:
            return Algorithms::heap_sort(*vec, step);
        case Algorithms::INSERTION:
            return Algorithms::insertion_sort(*vec, step);
        case Algorithms::QUICK:
            return Algorithms::quick_sort(*vec, step);
        case Algorithms::NONE:
            return *vec;
    }
}

int Algorithms::sleep_for_algorithm(Algorithms::Algorithm a) {
    switch (a) {
        case Algorithms::BUBBLE:
            return 0;
        case Algorithms::HEAP:
            return 4;
        case Algorithms::INSERTION:
            return 2;
        case Algorithms::QUICK:
            return 4;
        case Algorithms::NONE:
            return 0;
    }
}

std::string Algorithms::name_for_algorithm(Algorithms::Algorithm a) {
    switch (a) {
        case Algorithms::BUBBLE:
            return "Bubble Sort";
        case Algorithms::HEAP:
            return "Heap Sort";
        case Algorithms::INSERTION:
            return "Insertion Sort";
        case Algorithms::QUICK:
            return "QuickSort";
        case Algorithms::NONE:
            return "None";
    }
}
