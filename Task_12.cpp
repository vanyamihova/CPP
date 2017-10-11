//
//  Task_12.cpp
//  CPP Project
//
//  A program that finds the sum of the even numbers, from 1 to a user-entered number
//
//  Програма която намира сумата на четните числа, от 1 до въведено от потребителя число.
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
        cout << "Enter number: ";
        cin >> number;
    } while (number <= 0);
}

void calculateResult() {
    int result = 0;
    for (int i = 0; i <= number; i++) {
        if (i % 2 == 0) {
            result += i;
        }
    }
    cout << "Result is: " << result << endl;
}

int main() {
    enterNumber();
    calculateResult();
    system("pause");
    return 0;
}
