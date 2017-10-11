//
//  Task_13.cpp
//  CPP Project
//
//  A program that enters consecutively n numbers and returns in reverse order
//
//  Програма която въвежда последователно n числа и се извеждат в обратен ред
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//


//How many numbers you want? 5
//Enter number a[0]: 5
//Enter number a[1]: 2
//Enter number a[2]: 0
//Enter number a[3]: 4
//Enter number a[4]: 1


#include <stdio.h>
#include <iostream>

using namespace std;

void enterNumbers(int a[], int indexArray) {
    for (int i = 0; i < indexArray; i++) {
        cout << "Enter number a[" << i << "]: ";
        cin >> a[i];
    }
}

void printTheNumbersInReverse(int a[], int indexArray) {
    string message = "(";
    
    for (int i = indexArray - 1; i >= 0; i--) {
        message += to_string(a[i]);
        if (i != 0) {
            message += ", ";
        }
    }
    
    cout << message << ")" << endl;
}

void printTheNumbersInNormal(int a[], int indexArray) {
    string message = "(";
    
    for (int i = 0; i < indexArray; i++) {
        message += to_string(a[i]);
        if (i != indexArray - 1) {
            message += ", ";
        }
    }
    
    cout << message << ")" << endl;
}

void searchANumber(int a[], int indexArray) {
    string message;
    int searchNumber;
    
    do {
        cout << "Search for a number: ";
        cin >> searchNumber;
    } while (searchNumber < 1 && searchNumber > indexArray);
    
    int i = 0;
    while (searchNumber != a[i]) {
        i++;
        if (i == indexArray) {
            message = "The number is not found!";
            break;
        }
    }
    
    if (message.size() == 0) {
        message = "The number is " + to_string(searchNumber) + " on position " + to_string(i);
    }
    
    cout << message << endl;
}

void countANumber(int a[], int indexArray) {
    int count = 0;
    int countedNumber;
    
    do {
        cout << "Count a number: ";
        cin >> countedNumber;
    } while (countedNumber < 1);
    
    for (int i = 0; i < indexArray; i++) {
        if (a[i] == countedNumber) {
            count++;
        }
    }
    
    cout << "The number " << countedNumber << " is counted " << count << " times." << endl;
}

int calculateSum(int a[], int indexArray) {
    int sum = 0;
    for (int i = 0; i < indexArray; i++) {
        sum += a[i];
    }
    cout << "The sum is " << sum << endl;
    return sum;
}

void calculateSumOfEven(int a[], int indexArray) {
    int sum = 0;
    for (int i = 0; i < indexArray; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    cout << "The sum of even is " << sum << endl;
}

void calculateAvarage(int a[], int indexArray) {
    int sum = calculateSum(a, indexArray);
    double average = (double) sum / indexArray;
    cout << "The average is " << average << endl;
}

void calculateMultiplication(int a[], int indexArray) {
    int multiplication = 1;
    for (int i = 0; i < indexArray; i++) {
        multiplication *= a[i];
    }
    cout << "The multiplication is " << multiplication << endl;
}

void findMinValue(int a[], int indexArray) {
    int min = a[0];
    for (int i = 1; i < indexArray; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    cout << "The min value is " << min << endl;
}

void findMixValue(int a[], int indexArray) {
    int lastIndex = indexArray - 1;
    int max = a[lastIndex];
    for (int i = 0; i < lastIndex; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout << "The max value is " << max << endl;
}

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
    
    printTheNumbersInNormal(a, n);
}

void quickSort(int a[], int l, int r) {
    int i = l;
    int j = r;
    int temp;
    int x = a[(l + r)/2];
    
    do {
        while (a[i] < x) {
            i++;
        }
        
        while (a[j] > x) {
            j--;
        }
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++; j--;
        }
    } while(i <= j);
    
    if (l < j - 1) {
        quickSort(a, l, j);
    }
    if (i < r) {
        quickSort(a, i, r);
    }
}


int main() {
    int *a;
    int indexArray;
    
    do {
        cout << "How many numbers you want? ";
        cin >> indexArray;
    } while(indexArray < 1);
    
    a = new int[indexArray];
    
    enterNumbers(a, indexArray);
    
//    printTheNumbersInReverse(a, indexArray);
//    printTheNumbersInNormal(a, indexArray);
//    searchANumber(a, indexArray);
//    countANumber(a, indexArray);
//    calculateSum(a, indexArray);
//    calculateSumOfEven(a, indexArray);
//    calculateAvarage(a, indexArray);
//    calculateAvarage(a, indexArray);
//    calculateMultiplication(a, indexArray);
//    findMinValue(a, indexArray);
//    findMixValue(a, indexArray);
    quickSort(a, 0, indexArray);
    printTheNumbersInNormal(a, indexArray);
    
    system("pause");
    return 0;
}
