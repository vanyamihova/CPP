//
//  Task_11.cpp
//  CPP Project
//
//  A program that verifies whether 3 entered numbers can be sides of a rectangular triangle
//
//  Програма, която проверява дали 3 въведени числа могат да бъдат страни на правоъгълен триъгълник.
//
//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int a, b, c;

int isValidNumber(int number, string label) {
    do {
        cout << "Enter " << label << ": ";
        cin >> number;
    } while (number <= 0);
    
    return number;
}

void enterSides() {
    a = isValidNumber(a, "A");
    b = isValidNumber(b, "B");
    c = isValidNumber(c, "C");
}

int main() {
    enterSides();
    
    int result = (sqrt(c) == sqrt(b) + sqrt(a)) || (sqrt(b) == sqrt(b) + sqrt(c)) || (sqrt(b) == sqrt(c) + sqrt(a));
    if (result) {
        cout << a << ", " << b << ", " << c << " can be sides of triangle" << endl;
    } else {
        cout << a << ", " << b << ", " << c << " can NOT be sides of triangle" << endl;
    }
    
    system("pause");
    return 0;
}

