//
//  Algorithms.cpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#include "Algorithms.hpp"

struct Algorithms::CallbackEvent {
    int curr;
    std::vector<int> vecState;
};

std::vector<int> sort_with(Algorithms::Algorithm a, std::vector<int> vec) {
    switch (a) {
        case Algorithms::BUBBLE:
            return Algorithms::bubble_sort(vec);
        case Algorithms::HEAP:
            return Algorithms::heap_sort(vec);
        case Algorithms::INSERTION:
            return Algorithms::insertion_sort(vec);
        case Algorithms::QUICK:
            return Algorithms::quick_sort(vec);
        case Algorithms::NONE:
            return vec;
    }
}
