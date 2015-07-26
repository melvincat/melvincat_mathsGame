//
//  QuestionGenerator.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "QuestionGenerator.h"
#include "RandomNumber.h"
#include <iostream>

QuestionAnswer QuestionGenerator(){
    QuestionAnswer QA;
    
    int min = 1, max = 10;
    //generate 3 random numbers using min and max
    int numSwitch = RandomNumber(1, 4);
    int num2 = RandomNumber(min, max);
    int num3 = RandomNumber(min, max);

    //std::cout << num2 << "\t" << num3 << std::endl;

    //for easy typing
    using std::to_string;
    //create switch statement that changes to different question
    switch(numSwitch)
    {
        case 1:
            QA.question = to_string(num2) + " + " + to_string(num3);
            QA.answer = num2 + num3;
            break;
        case 2:
            QA.question = to_string(num2) + " - " + to_string(num3);
            QA.answer = num2 - num3;
            break;
        case 3:
            QA.question = to_string(num2)+ " x " + to_string(num3);
            QA.answer = num2*num3;
            break;
        case 4:
            QA.question = to_string(num2) + " / " + to_string(num3);
            QA.answer = static_cast<double>(num2)/static_cast<double>(num3);
            break;
            
    }
    return QA;
}