//
//  Task_04.cpp
//  CPP Project

//  Calculate the P and S of rectangle with sides 2.3 sм and 3.7 sм

// Да се напише програма която намира периметъра и лицето на правоъгълник със страни 2.3 см и 3.7см

//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    cout << "a = ";
    cin >> a;
    
    cout << "b = ";
    cin >> b;
    
    // Равнобедрен триъгълник
    //double P = a + b + sqrt(pow(a, 2) + pow(b, 2));
    int P = 2 * (a + b);
    int S = a * b;
    
    cout << "P = " << P << endl;
    cout << "S = " << S << endl;
    
    system("pause");
    return 0;
}

