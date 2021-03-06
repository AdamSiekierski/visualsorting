//
//  QuickSort.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef QuickSort_hpp
#define QuickSort_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
#include "Algorithms.hpp"

namespace Algorithms {
    std::vector<int> quick_sort(std::vector<int> vec, std::function<void(std::vector<int>*, int, int, int)> step);
}

#endif /* QuickSort_hpp */
