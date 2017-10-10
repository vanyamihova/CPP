//
//  Task_01.cpp
//  CPP Project

//  Software program which entered the radius of a circle
//  and calculates its circumference
//  and area of the circle with the radius.

//  Програма, която въвежда радиуса на окръжност
//  и намира и извежда дължината на окръжността
//  и лицето на кръга с дадения радиус.

//  Created by Vanya Mihova on 10/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <iostream>

using namespace std;

const double PI = 3.1415;
double radius;

void enterRadius() {
    cout << "r = ";
    cin >> radius;
}

void printP() {
    double p = 2 * PI * radius;
    cout << "P = " << p << endl;
}

void printS() {
    double s = PI * (radius * radius);
    cout << "S = " << s << endl;
}

// _tmain()
int proceed() {
    // Enter double for the radius
    enterRadius();
    
    // Print the length of the cirlce
    printP();
    
    // Print the S of the cirlce
    printS();
    
//    system("pause");
    return 0;
}


