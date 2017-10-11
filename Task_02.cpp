//
//  Task_02.cpp
//  CPP Project

//  Print boolean for these conditions

//  Да се запише булев израз, който
//  има стойност true, ако посоченото условие е в сила,
//  и стойност false, ако условието не е в сила

//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void printFirstSubtask() {
    bool r;
    int variable;
    
    cout << "Variable = ";
    cin >> variable;
    
    r = variable % 5 == 0;
    cout << "Result is " << r << endl;
}

void printSecondSubtask() {
    int x;
    cout << "X = ";
    cin >> x;
    
    bool result;
    result = x >= 2 && x <= 6;
    cout << "Result is " << result << endl;
}

void printThirdSubtask() {
    int x;
    cout << "X = ";
    cin >> x;
    
    bool result;
    result = x >= 2 || x <= 6;
    cout << "Result is " << result << endl;
}


int main() {
    // Цяло число да се дели на 5
    printFirstSubtask();
    
    // Точката Х принадлежи на [2,6]
    printSecondSubtask();
    
    // Точката Х принадлежи на отсечката [2,6]
    printThirdSubtask();

}

