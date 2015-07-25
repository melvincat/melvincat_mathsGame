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
#include "checker.h"

int main() {
    std::string UserName = StartUp();
    int count(0);
    for (int i = 0; i < 10; i++){
    struct QuestionAnswer QA1;
    QA1 = QuestionGenerator();
    std::cout << QA1.question << std::endl;
        if (Checker(QA1) == true){
            ++count;
        }
    }
    std::cout << UserName << " got " << count << " out of 10 right!" << std::endl;
    return 0;
}
