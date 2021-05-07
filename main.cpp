#include <iostream>

int main() {
    std::string input;

    system("clear");

    std::cout << "================================================\n";
    std::cout << "              Made by PH03be\n";
    std::cout << "        [ 0 ] for multiplication, etc\n";
    std::cout << "        [ 1 ] for text analysis\n";
    std::cout << "        [ 2 ] for 'Capitalism In A Nutshell'\n";
    std::cout << "        [ 3 ] for [A-N-I-M-E u-w-u]\n";
    std::cout << "        [ 4 ] for rock, paper, scissors\n";
    std::cout << "More will hopefully come in the near-ish future\n";
    std::cout << "================================================\n";
    std::cin >> input;

    if (input == "0") {
        system("g++ -o multiples.out math.cpp");
        system("clear");
        system("./multiples.out");
    } else if (input == "1") {
        system("g++ -o string.out string.cpp");
        system("clear");
        system("./string.out");
    } else if (input == "2") {
        system("clear");
        system("./main");
    } else if (input == "3") {
        system("clear");
        system("./anime");
    } else if (input == "4") {
        system("clear");
        system("./rock-paper-scissors");
    } else {
        system("clear");
        std::cout << "Incorrect character. Select one of the options from the main menu.\n";
        std::cin.ignore();
        std::cin.get();

        main();
    }
}
