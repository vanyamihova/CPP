//
//  Task_09.cpp
//  CPP Project
//
//  Print an entered score from the keybord with words in the console
//
//  Програма, която въвежда оценка от изпит с цифра и се извежда с думи.
//
//  Created by Vanya Mihova on 11/09/2017.
//  Copyright © 2017 Vanya Mihova. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int grade;

void enterGrade() {
    cout << "Grade is: ";
    cin >> grade;
}

bool isValid() {
    // Check the range of the grade!
    if (grade < 2 || grade > 6) {
        cout << "Incorrect input" << endl;
        return false;
    }
    return true;
}

string printTheGradeWithWords() {
    // Check what is the result
    switch(grade) {
        case 2:
            return "Poor Two";
        case 3:
            return "Satisfactory Three";
        case 4:
            return "Good Four";
        case 5:
            return "Very Good Five";
        case 6:
            return "Excellent Six";
    }
    
    // If for some reason we have no validation before this method
    return "Incorrect input";
}

int main() {
    // Enter the grade
    enterGrade();
    
    // Check if the grade is valid
    if (isValid()) {
        cout << "Grade is " << printTheGradeWithWords() << endl;
    }
    
    // Pause the system to see the result
    system("pause");
    return 0;
}

