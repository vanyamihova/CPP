//
//  Task_10.cpp
//  CPP Project
//
//  A program that calculates the factor of a user-entered number
//
//  Програма, която изчислява факториела на въведено от потребителя число.
//
//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int number;

void enterNumber() {
    do {
        cout << "Enter a number: ";
        cin >> number;
    } while (number <= 0);
}

int calculateFact() {
    int result = 1;
    
//    while (number > 0) {
//        result *= number--;
//    }
    for (; number > 0; number--) {
        result *= number;
    }
    
    return result;
}

int main() {
    // Enter the number while it is valid
    enterNumber();
    
    // Calculate the factoriel
    int result = calculateFact();
    cout << "Result is: " << result << endl;
    
    // Pause the system to see the result
    system("pause");
    return 0;
}

