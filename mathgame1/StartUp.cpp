//
//  StartUp.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "StartUp.h"
#include <iostream>

std::string StartUp()
{
    std::cout << "Welcome to the maths game!" <<std::endl;
    std::cout << "Enter your UserName:" << std::endl;
    std::string name;
    std::getline(std::cin, name);
    return name;
}