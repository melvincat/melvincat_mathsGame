//
//  main.cpp
//  mathgame1
//
//  Created by Nicholas on 25/07/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include <iostream>
#include "StartUp.h"
#include "RandomNumber.h"
#include "QuestionAnswer.h"
#include "QuestionGenerator.h"

int main() {
    //StartUp();
    
    for (int i = 0; i <= 10;i++){
    struct QuestionAnswer QA;
    QA = QuestionGenerator();
    std::cout << QA.question << "\t" << QA.answer << std::endl;
    }
    return 0;
}
