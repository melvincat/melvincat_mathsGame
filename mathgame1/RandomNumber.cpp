//
//  RandomNumber.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "RandomNumber.h"
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
double RandomNumber(int min, int max){
    double Rnumber;
    srand(static_cast<unsigned int>(time(0)));
    
    Rnumber= min + (rand() % (int)(max - min + 1));
    
    return Rnumber;
}