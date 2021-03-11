
/**
 * @file multiples.cpp
 * @author Phoebe Leong (dariusleong8@gmail.com)
 * @brief A simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.
 * @version 1.1
 * @date 11-03-21
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

int close () {
    return 0;
}

void multiplication() {
    for (int i = 0; i < verifiedInput; i++) {
        int j = i * i;
        std::cout << i << " " << j;
        std::cout << "\n";
    }
}

void check() {
    if (input > 1 && input < num + 1) {
        verifiedInput = input;
        multiplication();
    } 
    if (input < 1 || input > num + 1) {
        std::cout << "Your input does not meet the specified requirements. Try again:\n";
        std::cin >> input;
}

if (input == NAN) {
    input = 10;
}

}
void intro() {
    std::cout << "\n";
    std::cout << "--Started by Phoebe Leong on 26 / 2 / 2021 at 7:24pm in Sydney, Australia using Visual Studio Code v1.53.2 for MacOS Catalina v10.15.7--\n";
    std::cout << "--Finished by Phoebe Leong on 11 / 3 / 2021 at 11:13am in Sydney, Australia using Visual Studio Code v1.54.2 for MacOS Catalina v10.15.7--\n";
    std::cout << "--Originally tested using iTerm v3.4.4 for MacOS Catalina v10.15.7--\n";
    std::cout << "https://github.com/phoebe-leong/multiples\n\n";  

    std::cout << "This is a simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.\n\n";
}

void multiples() {
    std::cout << "Give a number between 1 and " << num << ":\n";
    std::cin >> input;

    // Checks if the user input meets the 1 - 10 ratio

    check();

}

int main () {

    intro();
    multiples();

    cout << "Press enter to close the program.\n";
    cin.ignore();
    cin.get();
    close();
}
