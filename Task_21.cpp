//
//  Task_21.cpp
//  CPP Project

//  A library software product. Every book has: title, number, price, count. The program must show:
//  - list all books with all data for them
//  - calculate total price for all books in the library
//  - calculate total price for a book in the library
//  - list all book sorted alphabetically

//  Програма за обслужване на библиотека. За всяка книга се въвежда следната информация: заглавие на книга, шифър по каталог, единична цена, брой. Програмата да дава възможност за получаване на следните резултати:
//  - извеждане на списък на всички книги с въведените данни за тях
//  - да се пресметне и изведе общата сума която е платена за всички налични книги в библиотеката
//  - да се пресметне и изведе максималната сума дадена за книга от библиотеката
//  - извеждане на списъка на всички книги, подредени по азбучен ред
//
//  Created by Vanya Mihova on 17/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

struct Book {
    char title[20];
    int number;
    double price;
    int count;
};

void input(Book &book) {
    cout << "Title: ";
    cin >> book.title;
    
    cout << "Number: ";
    cin >> book.number;
    
    cout << "Price: ";
    cin >> book.price;
    
    cout << "Count: ";
    cin >> book.count;
}

void output(Book books[], int n) {
    cout << setw(20) << "Title" << setw(10) << "Number" << setw(10) << "Price" << setw(10) << "Count" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(20) << books[i].title << setw(10) << books[i].number << setw(10) << books[i].price << setw(10) << books[i].count << endl;
    }
}

double sumPrice(Book books[], int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += (books[i].price * books[i].count);
    }
    return result;
}

double maxPrice(Book books[], int n) {
    double max = books[0].price * books[0].count;
    for (int i = 1; i < n; i++) {
        double temp = books[i].price * books[i].count;
        if (max < temp) {
            max = temp;
        }
    }
    return max;
}

void bubbleSort(Book books[], int n) {
    Book tmp;
    for(int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (strcmp(books[j-1].title, books[j].title) > 0) {
                tmp = books[j];
                books[j] = books[j-1];
                books[j-1] = tmp;
            }
        }
    }
}

int main() {
    int n = 3;
    Book books[n];
    
    for (int i = 0; i < n; i++) {
        input(books[i]);
    }
    output(books, n);
    
    double sumPriceResult = sumPrice(books, n);
    cout << "Total price is: " << sumPriceResult << endl;
    
    double maxPriceResult = maxPrice(books, n);
    cout << "Max price is: " << maxPriceResult << endl;
    
    bubbleSort(books, n);
    output(books, n);

    system("pause");
    return 0;
}

