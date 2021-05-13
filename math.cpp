#include <iostream>
#include <string>
#include <math.h>

// variable declarations

int input = 0;  
double verifiedInput;
const int num = 50;

// function declarations

int close();
void multiplication();
void square();
void addition();
void subtraction();
void modulo();
void operatorCheck();
void check();
void numberInput();

// Universal close function/s to exit the program

int close () {
    system("clear");
    std::cout << "Press enter to close the program.\n";

    std::cin.get();

    system("clear");
    return 0;
}

// Operators

void multiplication() {
    system("clear");
    for (int i = 0; i <= verifiedInput; i++) {
        int j = i * i;
        std::cout << i << " " << j;
        std::cout << "\n";
    }

    std::cin.ignore();
    std::cin.get();
}

void square() {
    system("clear");
    std::cout << "The square of " << verifiedInput << " is " << verifiedInput * verifiedInput << "\n";

    std::cin.ignore();
    std::cin.get();
}

void addition() {
    system("clear");
    for (int i = 1; i <= verifiedInput; i++) {
        int j = i + i;
        std::cout << i << " " << j;
        std::cout << "\n";
    }

    std::cin.ignore();
    std::cin.get();
}

void subtraction() {
    system("clear");
    for (int i = 1; i <= verifiedInput; i++) {
        int j = i - 1;
        std::cout << i << " " << j;
        std::cout << "\n";
    }

    std::cin.ignore();
    std::cin.get();
}

void modulo() {
    system("clear");
    for (int i = 1; i <= verifiedInput; i++) {
        int j = i % i;
        std::cout << i << " " << j;
        std::cout << "\n";
    }

    std::cin.ignore();
    std::cin.get();
}

// Operators - end

void operatorCheck() {
    system("clear");
    std::string numUse;
    int numUseInt;

    std::cout << "Do you want to add, multiply, modulo (divide the number and output the remainder), find the square of your number, or subtract the numbers?\n";
    std::cin >> numUse;
    std::cout << "\n\n";

    if (numUse == "add") {
        addition();
    } else if (numUse == "multiply") {
        multiplication();
    } else if (numUse == "subtract") {
        subtraction();
    } else if (numUse == "modulo") {
        modulo();
    } else if (numUse == "square") {
        square();
    } else {
        std::cout << "Your input is not an option.\n\n";
        numberInput();
    }
}

void check() {

    if (input > 1 && input < num + 1) {
        verifiedInput = input;
        operatorCheck();
    } else if (input < 1 || input > num) {
        std::cout << "\n\nOut of range\n";

        std::cin.get();
        numberInput();
    }
}

void numberInput() {

    std::cout << "Give a number between 1 and " << num << ":\n";
    std::cin >> input;

    // Checks if the user input meets the 1 - 10 ratio

    check();
}

int main () {
    numberInput();
    close();
}
