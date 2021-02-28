
/**
 * @file multiples.cpp
 * @author Phoebe Leong (dariusleong8@gmail.com)
 * @brief A simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.
 * @version 0.1
 * @date 26-02-21
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <unistd.h>
#include <stdio.h>  
#include <stdlib.h>
#include <ctime>
#include <cmath>
#include <fstream>
#include "multiples.h"
using namespace std;

/*

Devlog:

Friday 26-02-21:
Made the basis of the program

Saturday 27-02-21:
Put the definition of multiplication() before multiples() so that it could be run within multiples() instead of in main()
Did some testing
Added verifiedInputPlusOne
Removed verifiedInputPlusOne
Added randNum
Did a lot of debugging and edge-case fixing
Added nanosleep()
Removed nanosleep()

Sunday 28-02-21:
Removed #include <time.h>
Added #include <ctime>
Added saveFile
Added save
Added #include <limits>
Removed #include <limits>

*/

int input;
int verifiedInput;
const int randNum = rand();
ifstream saveFile;
ofstream save;

void check() {
    if (input > 1 && input < randNum + 1) {
        verifiedInput = input;

        multiplication();
    } else {
        std::cout << "Your input does not meet the specified requirements. Try again:\n";
        std::cin >> input;

        check();

    }
}

void intro() {
    std::cout << "\n";
    std::cout << "--Started by Phoebe Leong on 26 / 2 / 2021 at 7:24pm in Sydney, Australia using Visual Studio Code v1.53.2 for MacOS Catalina v10.15.7--\n";
    std::cout << "--Finished by Phoebe Leong on 28 / 2 / 2021 at 11:13am in Sydney, Australia using Visual Studio Code v1.53.2 for MacOS Catalina v10.15.7--\n";
    std::cout << "--Originally tested using iTerm v3.4.4 for MacOS Catalina v10.15.7--\n";
    std::cout << "https://github.com/darius-leong/multiples\n\n";  

    std::cout << "This is a simple C++ program which takes user input and then prints out the number and its multiple until the user-inputted number is reached.\n\n";
}

void multiplication() {
    for (int i = 0; i < verifiedInput; i++) {
        int j = i * i;
        std::cout << i << " " << j;
        std::cout << "\n";
    }
}

void multiples() {
    std::cout << "Give a number between 1 and " << randNum << ":\n";
    std::cin >> input;

    // Checks if the user input meets the 1 - 10 ratio

    check();

}

int main() {

    srand (time(NULL));

    intro();
    multiples();

    std::cout << "\n\n";
    std::cout << "Press enter to close the program.\n";

    std::cin.get();
    std::cin.ignore();

    return 0;
}
