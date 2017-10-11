//
//  Task_18.cpp
//  CPP Project

//  Returns the minimum of 3 numbers

//  Връща минималното от 3 числа
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int min(int a, int b, int c) {
    if (a < b && b < c) {
        return a;
    } else if (b < a && a < c) {
        return b;
    }
    return c;
}

int main() {
    cout << "Min is: " << min(5, 5, 4) << endl;
    
    system("pause");
    return 0;
}

