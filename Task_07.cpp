//
//  Task_07.cpp
//  CPP Project

//  Additional task to the Task_06
//  to print that the numbers are the same
//  or the numbers are different

//  Допълнение към предната задача,
//  да отпечата дали всички числа са еднакви
//  или цифрите на числото не са еднакви

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
    
    if (h == s == d == e) {
        cout << "The numbers are the same" << endl;
    } else {
        cout << "The numbers are not the same" << endl;
    }
    
    system("pause");
    return 0;
}

