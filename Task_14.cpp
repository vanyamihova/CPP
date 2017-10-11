//
//  Task_14.cpp
//  CPP Project

//  A program that allocates dynamic directory memory to an integer type, assigns 15 to the variable to which it is indexed, outputs the value of the directory and the variable to which it points the pointer, and releases the allocated memory

//  Програма която заделя динамично памет за указател към целочислен тип, присвоява 15 на променливата към която съчи указателя, извежда стойнсотта на указателя и на променливата, към която сочи указателя и освобождава заделената памет.
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int *p = new int;
    *p = 15;
    
    cout << "P address: " << hex << p << endl;
    cout << "P value: " << dec << *p << endl;
    
    delete p;
    
    system("pause");
    return 0;
}

