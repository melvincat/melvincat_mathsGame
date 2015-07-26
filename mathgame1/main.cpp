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
#include "QuestionGenerator.h"
#include "checker.h"

int main() {
    std::string UserName = StartUp();
    //count tracks how many quesitons user got right
    int count(0);
    //boolean for checking if user wants app to restart
    bool run = true;
    while (run)
    {
        //for loop generates ten quesitons
        for (int i = 0; i < 10; i++)
        {
            QuestionAnswer QA1;
            QA1 = QuestionGenerator();
            std::cout << QA1.question << std::endl;
            //if user got answer right add one to counter
            if (Checker(QA1)){
                ++count;
            }
        }
        std::cout << UserName << " got " << count << " out of 10 right!" << "\n";
        
        //checks if user wants to replay the game
        std::cout << "Run again? (Press Y for yes, N for no)"<<"\n";
        char runagain = 0;
        std::cin >> runagain;
        if (runagain == 'Y'||runagain == 'y')
        {
            run =true;
        }
        else {
            run = false;
        }
    }
    //close app and flush the stream
    std::cout << "Thankyou for playing" << std::endl;
    return 0;
}
