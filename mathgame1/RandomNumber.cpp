//
//  RandomNumber.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "RandomNumber.h"
#include <random>
int RandomNumber(int min, int max){
    std::random_device rd;
    std::uniform_int_distribution<> distr(min, max);
    return distr(rd);
}