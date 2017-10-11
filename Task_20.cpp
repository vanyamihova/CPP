//
//  Task_20.cpp
//  CPP Project

//  Bubble sort
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void bubbleSort(int a[], int n) {
    int tmp;
    for(int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (a[j-1] > a[j]) {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

int main() {
    int n = 5;
    int *a = new int[n];
    a[0] = 6;
    a[1] = 3;
    a[2] = 1;
    a[3] = 9;
    a[4] = 0;
    
    bubbleSort(a, n);
    system("pause");
    return 0;
}

