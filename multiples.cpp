
/**
 * @file multiples.cpp
 * @author PH03be (phoebeleong8@gmail.com)
 * @brief A simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.
 * @version 1.3
 * @date 12-03-21
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <string>
#include <math.h>
#include "multiples.h"
using namespace std;

int input;  
double verifiedInput;
const int num = 50;

// Universal close function/s to exit the program

int close () {
    cout << "Press enter to close the program.\n";

    cin.ignore();
    cin.get();

    return 0;
}

int forceClose () {
    return 0;
}

// Operators

void multiplication() {
    for (int i = 0; i <= verifiedInput; i++) {
        int j = i * i;
        cout << i << " " << j;
        cout << "\n";
    }
}

void addition() {
    for (int i = 1; i <= verifiedInput; i++) {
        int j = i + i;
        cout << i << " " << j;
        cout << "\n";
    }
}

void subtraction() {
    for (int i = 1; i <= verifiedInput; i++) {
        int j = i - 1;
        cout << i << " " << j;
        cout << "\n";
    }
}

void division() {
    for (int i = 1; i <= verifiedInput; i++) {
        int j = i % i;
        cout << i << " " << j;
        cout << "\n";
    }
}

// Operators - end

void operatorCheck() {
    string numUse;
    int numUseInt;

    cout << "Do you want to add, multiply, divide, or subtract the numbers?\n";
    cin >> numUse;
    cout << "\n\n";

    if (numUse == "add") {
        addition();
    } else if (numUse == "multiply") {
        multiplication();
    } else if (numUse == "subtract") {
        subtraction();
    } else if (numUse == "divide") {
        division();
    }
}

void check() {

    if (input > 1 && input < num + 1) {
        verifiedInput = input;
        operatorCheck();
    } else if (input < 1 || input > num) {
        numberInput();
    } else {
        // doesnt work - why not?
        forceClose();
    }
}

void intro() {
    cout << "\n";
    cout << "https://github.com/phoebe-leong/multiples" << "\n\n";  

    cout << "This is a simple C++ program which takes user input and then prints out the number and the answer to the selected equation until the user-inputted number is reached.\n\n";
}

void numberInput() {

    cout << "Give a number between 1 and " << num << ":\n";
    cin >> input;

    // Checks if the user input meets the 1 - 10 ratio

    check();
}

int main () {
    intro();
    numberInput();
    close();

}
