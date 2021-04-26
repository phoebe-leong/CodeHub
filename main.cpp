#include <iostream>

// variable declarations

int input;

int main() {
    std::cout << "================================================\n";
    std::cout << "              Made by PH03be\n";
    std::cout << "        [ 0 ] for multiplication, etc\n";
    std::cout << "        [ 1 ] for text analysis\n";
    std::cout << "        [ 2 ] for 'Capitalism In A Nutshell'\n";
    std::cout << "More will hopefully come in the near-ish future\n";
    std::cout << "================================================\n";
    std::cin >> input;

    if (input == 0) {
        system("g++ -o multiples.out math.cpp");
        system("clear");
        system("./multiples.out");
    } else if (input == 1) {
        system("g++ -o string.out string.cpp");
        system("clear");
        system("./string.out");
    } else if (input == 2) {
        system("clear");
        system("./main");
    }
}
