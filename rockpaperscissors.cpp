#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// variable declarations
int playerScore = 0;
int computerScore = 0; 
int rounds = 0;

// what each of the players decide as their turn

std::string playerDecision;
std::string computerDecision;


// function declarations
int close();
void mainMenu();
void game();
void gameEnd();

int close() {
    std::cout << "Press enter to exit to the main menu:\n";
    std::cin.get();

    system("clear");
    system("./menu.out");
}

void mainMenu() {
    // basic info of the game - altered the rules a bit to make it more playable

    system("clear");
    std::cout << "Rocks, Paper, Scissors\n";
    std::cout << "      By PH03be\n\n";

    std::cout << "Rules & Basic Info Needed To Play:\n";
    std::cout << "The game has five rounds until a winner is declared.\n\n";

    std::cout << "Rock beats scissors,\n";
    std::cout << "Scissors beats paper,\n";
    std::cout << "And paper beats rock\n\n";

    std::cout << "Have fun!\n";
    std::cin.get();
    system("clear");
    game();
}

void gameEnd() {
    if (playerScore == computerScore) {
        std::cout << "Tie!\n";
    } else if (playerScore < computerScore) {
        std::cout << "'Computer' wins!\n";
    } else if (playerScore > computerScore) {
        std::cout << "'Player' wins!\n";
    }

    std::cin.get();
    close();
}

void game() {
    int computerRand = rand() % 2;

    std::cout << "Rocks, paper, scissors?\n";
    std::cin >> playerDecision;

    switch (computerRand) {
        case 0:
        computerDecision = "Rocks";
        break;
        case 1:
        computerDecision = "Paper";
        break;
        case 2: 
        computerDecision = "Scissors";
        break;
    }

    std::cout << "'Player' chose " << playerDecision << "\n";
    std::cout << "'Computer' chose " << computerDecision << "\n";
    rounds++;
    
    if ((playerDecision == "Rocks" || playerDecision == "rocks" || playerDecision == "rock" || playerDecision == "Rock") && computerDecision == "Scissors") {
        playerScore++;
    } else if ((playerDecision == "Rocks" || playerDecision == "rocks" || playerDecision == "rock" || playerDecision == "Rock") && computerDecision == "Paper") {
        playerScore++;
    } else if ((playerDecision == "Paper" || playerDecision == "paper") && computerDecision == "Scissors") {
        computerScore++;
    } else if ((playerDecision == "Paper" || playerDecision == "paper") && computerDecision == "Rocks") {
        computerScore++;
    } else if ((playerDecision == "Scissors" || playerDecision == "scissors" || playerDecision == "scissor") && computerDecision == "Paper") {
        playerScore++;
    } else if ((playerDecision == "Scissors" || playerDecision == "scissors" || playerDecision == "scissor") && computerDecision == "Rocks") {
        computerScore++;
    }

    std::cin.ignore();
    std::cin.get();

    if (rounds == 5) {
        system("clear");
        gameEnd();
    } else {
        system("clear");
        game();
    }
}

int main() {
    std::srand(std::time(nullptr));

    mainMenu();
}