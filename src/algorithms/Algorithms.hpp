//
//  Algorithms.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef Algorithms_hpp
#define Algorithms_hpp

#include <stdio.h>

#include "BubbleSort.hpp"
#include "HeapSort.hpp"
#include "InsertionSort.hpp"
#include "QuickSort.hpp"

namespace Algorithms {
    struct CallbackEvent;

    typedef enum : int {
        BUBBLE,
        HEAP,
        INSERTION,
        QUICK,
        NONE,
    } Algorithm;

    std::vector<int> sort_with(Algorithms::Algorithm a, std::vector<int> vec);
}

#endif /* Algorithms_hpp */
