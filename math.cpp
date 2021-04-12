#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// variable declarations

int input;  
double verifiedInput;
const int num = 50;

// function declarations

int close();
int forceClose();
void multiplication();
void addition();
void subtraction();
void modulo();
void operatorCheck();
void check();
void intro();
void numberInput();

// Universal close function/s to exit the program

int close () {
    cout << "Press enter to close the program.\n";

    cin.ignore();
    cin.get();

    system("clear");
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

void modulo() {
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

    cout << "Do you want to add, multiply, modulo (divide the number and output the remainder), or subtract the numbers?\n";
    cin >> numUse;
    cout << "\n\n";

    if (numUse == "add") {
        addition();
    } else if (numUse == "multiply") {
        multiplication();
    } else if (numUse == "subtract") {
        subtraction();
    } else if (numUse == "modulo") {
        modulo();
    } else {
        cout << "Your input is not an option.\n\n";
        numberInput();
    }
}

void check() {

    if (input > 1 && input < num + 1) {
        verifiedInput = input;
        operatorCheck();
    } else if (input < 1 || input > num) {
        cout << "\n\nOut of range\n\n";
        numberInput();
    } else {
        // need to find a way to fix this
    }
}

void intro() {
    cout << "\n";  
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