//
//  RandomNumber.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "RandomNumber.h"
#include <random>// for time()
double RandomNumber(int min, int max){
    double Rnumber;
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(min, max); // define the range
    
    Rnumber= distr(eng);
    
    return Rnumber;
}