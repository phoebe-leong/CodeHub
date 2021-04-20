#include <iostream>
using namespace std;

// variable declarations

int input;

int main() {
    cout << "================================================\n";
    cout << "              Made by PH03be\n";
    cout << "        [ 0 ] for multiplication, etc\n";
    cout << "        [ 1 ] for text analysis\n";
    cout << "        [ 2 ] for 'Capitalism In A Nutshell'\n";
    cout << "More will hopefully come in the near-ish future\n";
    cout << "================================================\n";
    cin >> input;

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
