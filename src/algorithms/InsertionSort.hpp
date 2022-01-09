//
//  InsertionSort.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef InsertionSort_hpp
#define InsertionSort_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
#include "Algorithms.hpp"

namespace Algorithms {
    std::vector<int> insertion_sort(std::vector<int> vec, std::function<void(std::vector<int>*, int, int, int)> step);
}

#endif /* InsertionSort_hpp */
