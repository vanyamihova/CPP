//
//  Task_08.cpp
//  CPP Project
//
//  Print the value of Y
//
//  Да се изведе стойността на Y
//
//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    double y;
    
    cout << "A = ";
    cin >> a;
    
    cout << "B = ";
    cin >> b;
    
    if (a > 0) {
        y = (pow(a, 2) + b) / sqrt(a);
    } else {
        y = (a - b) / pow(b, 3);
    }
    
    cout << "Result is: " << y;
    
    system("pause");
    return 0;
}

