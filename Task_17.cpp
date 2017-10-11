//
//  Task_17.cpp
//  CPP Project
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void enterValue(int &num, string label = "Number") {
    do {
        cout << label << " = ";
        cin >> num;
    } while (num <= 0);
}

int sum(int a, int b) {
    return a+b;
}

int main() {
    int a, b;
    
    enterValue(a, "A");
    enterValue(b, "B");
    
    cout << "Result is " << sum(a, b) << endl;
    cout << "Result is " << sum(3, 4) << endl;

    system("pause");
    return 0;
}

