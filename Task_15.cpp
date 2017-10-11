//
//  Task_15.cpp
//  CPP Project

//  Define a variable from a quiet pointer to an int and an int variable having a value of 10. Assign the value of the integer variable to the pointer and output the value of the variable to the integer variable and output the value of the variable to which the pointer points. Then increase the value of the variable to which the pointer (via the pointer) points to a unit and the new value is displayed.

//  Да се дефинира променлива от тих указател към int и променлива от тип int, която да има стойност 10. Да се присвои на указателя стойността на целочислената променлива и да се изведе стойността на променливата към целочислената променлива и да се изведе стойността на променливата, към която сочи указателят. След това да се увеличи стойността на променливата, към която сочи указателят (чрез указателя) с единица и да се изведе новата стойност.
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int *p;
    int i = 10;
    p = &i;
    cout << *p << endl;
    
    *p += 1;
    cout << *p << endl;
    cout << i << endl;
    
    system("pause");
    return 0;
}

