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
#include <string>
#include <vector>
#include "constants.hpp"

#include "BubbleSort.hpp"
#include "HeapSort.hpp"
#include "InsertionSort.hpp"
#include "QuickSort.hpp"

namespace Algorithms {
    typedef enum : int {
        BUBBLE,
        HEAP,
        INSERTION,
        QUICK,
        NONE,
    } Algorithm;

    // Vector, current index, new reads, new writes
    typedef std::function<void(std::vector<int>*, int, int, int)> StepCallback;

    std::vector<int> sort_with(Algorithms::Algorithm a, std::vector<int>* vec, Algorithms::StepCallback step);

    int sleep_for_algorithm(Algorithms::Algorithm a);

    std::string name_for_algorithm(Algorithms::Algorithm a);
}

#endif /* Algorithms_hpp */
