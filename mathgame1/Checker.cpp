//
//  Checker.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "Checker.h"
#include "QuestionAnswer.h"
#include <iostream>

bool Checker(struct QuestionAnswer QA){
    bool TorF = true;
    double UserAnswer;
    std::cin >> UserAnswer;
    if (UserAnswer != QA.answer)
    {
        std::cout << "Wrong" << std::endl;
        TorF = false;
    }
    else {
        std::cout << "Correct!" <<std::endl;
        TorF = true;
    }
    return TorF;
}