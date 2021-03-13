
/**
 * @file multiples.cpp
 * @author PH03be (phoebeleong8@gmail.com)
 * @brief A simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.
 * @version 0.2
 * @date 12-03-21
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <unistd.h>
#include <stdio.h>  
#include <stdlib.h>
#include <cmath>
#include "multiples.h"
using namespace std;

int input;
int verifiedInput;
const int num = 50;


// Universal close function to exit the program

int close () {
    cout << "Press enter to close the program.\n";

    cin.ignore();
    cin.get();

    return 0;
}

// Operators

void multiplication() {
    for (int i = 0; i < verifiedInput; i++) {
        int j = i * i;
        cout << i << " " << j;
        cout << "\n";
    }
}

void addition() {
    for (int i = 0; i < verifiedInput; i++) {
        int j = i + i;
        cout << i << " " << j;
        cout << "\n";
    }
}

void subtraction() {
    for (int i = 0; i < verifiedInput; i++) {
        int j = i;
        j -= 1;
        cout << i << " " << j;
        cout << "\n";
    }
}

void operatorCheck() {
    string numUse;
    int numUseInt;

    cout << "Do you want to add, multiply, or subtract the numbers?\n";
    cin >> numUse;
    cout << "\n\n";

    if (numUse == "add") {
        addition();
    } else if (numUse == "multiply") {
        multiplication();
    } else if (numUse == "subtract") {
        subtraction();
    }
}

void check() {

    if (input > 1 && input < num + 1) {
        verifiedInput = input;
        operatorCheck();

    } else if (input < 1 || input > num) {
        numbers();
    }
}

void intro() {
    cout << "\n";
    cout << "https://github.com/phoebe-leong/multiples\n\n";  

    cout << "This is a simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.\n\n";
}

void numbers() {

    cout << "Give a number between 1 and " << num << ":\n";
    cin >> input;

    // Checks if the user input meets the 1 - 10 ratio

    check();
}

int main () {
    intro();
    numbers();
    close();

}
