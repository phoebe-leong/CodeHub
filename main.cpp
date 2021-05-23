#include <iostream>

int main() {
    std::string input;

    system("clear");

    std::cout << "================================================\n";
    std::cout << "              Made by PH03be\n";
    std::cout << "        [ 1 ] for multiplication, etc\n";
    std::cout << "        [ 2 ] for text analysis\n";
    std::cout << "        [ 3 ] for 'Capitalism In A Nutshell'\n";
    std::cout << "        [ 4 ] for a random anime character generator\n";
    std::cout << "        [ 5 ] for rock, paper, scissors\n";
    std::cout << "        [ 6 ] to exit the program\n";
    std::cout << "================================================\n";
    std::cin >> input;

    if (input == "1") {
        system("g++ -o multiples.out math.cpp");
        system("clear");
        system("./multiples.out");
    } else if (input == "2") {
        system("g++ -o string.out string.cpp");
        system("clear");
        system("./string.out");
    } else if (input == "3") {
        system("g++ -o CIAN.out CIAN.cpp");
        system("clear");
        system("./CIAN.out");
    } else if (input == "4") {
        system("g++ -o anime.out anime.cpp");
        system("clear");
        system("./anime.out");
    } else if (input == "5") {
        system("g++ -o rockpaperscissors.out rockpaperscissors.cpp");
        system("clear");
        system("./rockpaperscissors.out");
    } else if (input == "6") {
        system("clear");
        system("chmod +x exit.sh");
        system("./exit.sh");
    } else {
        system("clear");
        std::cout << "Not an input. Select one of the options from the main menu.\n";
        std::cin.ignore();
        std::cin.get();

        main();
    }
}
