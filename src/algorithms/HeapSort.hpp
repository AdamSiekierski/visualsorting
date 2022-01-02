//
//  HeapSort.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef HeapSort_hpp
#define HeapSort_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
#include "Algorithms.hpp"

namespace Algorithms {
    std::vector<int> heap_sort(std::vector<int> vec, std::function<void(std::vector<int>*, int)> step);
}

#endif /* HeapSort_hpp */
