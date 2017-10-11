//
//  Task_16.cpp
//  CPP Project

//  A program in which to define two integer variables, such as the values of the variables are entered by the keyboard. Define a pointer pointing to the values of the first variable and three pointers that point to the value of the second variable. On the third pointer to assign first and the fourth - the variable to which the first pointer points. Display the values of the pointers and variables to which they refer.

//  Да се напише програма, в която да се дефинират две целочислени променливи като стойностите на променливите се въвеждат от клавиатурата. Да се дефинира един указател, който сочи към стойностите на първата променлива и три указателя които сочат към стойността на втората променлива. На третият указател да се присвои първия, а на четвъртия - променливата, към която сочи първият указател. Да се изведат стойностите на указателите и променливите, към които сочат.
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "A = ";
    cin >> a;
    
    cout << "B = ";
    cin >> b;
    
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &b;
    int *p4 = &b;
    
    p3 = p1;
    *p4 = *p1;
    
    cout << "P1: " << hex << p1 << "; " << dec << *p1 << endl;
    cout << "P2: " << hex << p2 << "; " << dec << *p2 << endl;
    cout << "P3: " << hex << p3 << "; " << dec << *p3 << endl;
    cout << "P4: " << hex << p4 << "; " << dec << *p4 << endl;

    system("pause");
    return 0;
}

