//
//  Utils.hpp
//  VisualSorting
//
//  Created by Adam Siekierski on 24/12/2021.
//  Copyright © 2021 Adam Siekierski. All rights reserved.
//

#ifndef Utils_hpp
#define Utils_hpp

#include <vector>
#include <algorithm>
#include <sstream>
#include <stdlib.h>
#include <time.h>

namespace Utils {
    std::vector<int> random_vector(int len, int min, int max);

    int random_number(int min, int max);

    std::string print_vector(std::vector<int> vec);
};

#endif /* Utils_hpp */
