//
//  Task_06.cpp
//  CPP Project

//  A program in which the user must entered a three-digit number
//  and print on a different lines the numbers - hundreds, tenths, units of the number.

//  Да се напише програма която изисква от потребителя
//  да въведе трицифрено число
//  да се отпечатва на отделни редове цифрите - стотици, десетици, единици на числото.

//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Number = ";
    cin >> number;

    int h = number / 1000;
    int s = number / 100 % 10;
    int d = number / 10 % 10;
    int e = number % 10;

    cout << "Result is: " << endl;
    cout << "h = " << h << endl;
    cout << "s = " << s << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    system("pause");
    return 0;
}

