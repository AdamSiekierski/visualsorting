//
//  ResoucePath.m
//  VisualSorting
//
//  Created by Adam Siekierski on 09/01/2022.
//  Copyright © 2022 Adam Siekierski. All rights reserved.
//

#include "ResourcePath.hpp"
#import <Foundation/Foundation.h>

std::string Utils::resourcePath() {
    NSAutoreleasePool* pool = [[NSAutoreleasePool alloc] init];

    std::string rpath;
    NSBundle* bundle = [NSBundle mainBundle];

    if (bundle == nil) {
#ifdef DEBUG
        NSLog(@"bundle is nil... thus no resources path can be found.");
#endif
    } else {
        NSString* path = [bundle resourcePath];
        rpath = [path UTF8String] + std::string("/");
    }

    [pool drain];

    return rpath;
}
