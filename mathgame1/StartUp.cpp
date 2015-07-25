//
//  StartUp.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "StartUp.h"
#include <iostream>
std::string userName;
void setUserName(std::string x)
{
    ::userName = x;
}
std::string getUserName()
{
    return ::userName;
}
void StartUp()
{
    std::cout << "Welcome to the maths game!" <<std::endl;
    std::cout << "Enter your UserName:" << std::endl;
    std::string name;
    std::getline(std::cin, name);
    setUserName(name);
}