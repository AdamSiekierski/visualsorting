//
//  BubbleSort.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>
#include <vector>
#include "Algorithms.hpp"

namespace Algorithms {
    std::vector<int> bubble_sort(std::vector<int> vec, std::function<void(std::vector<int>*, int)> step);
}

#endif /* BubbleSort_hpp */
