#include <iostream>
#include <string>

// variable declarations

std::string word;
int consonantNum;

// function declarations

int close();
void length();
void vowelCount();
void consonantCount();
void concatenate();
void wordInput();
void wordCheck();

// universal close function

int close () {
    std::cout << "Press enter to close the program.\n";

    std::cin.ignore();
    std::cin.get();

    system("clear");
    return 0;
}

void length() {
    std::cout << "Word Length: " << word.size() + 1;
}

// finds the number of vowels in the string
// the same algorithm is used in consonantCount()

void vowelCount() {

    std::cout << "\n\n";

    // variable declarations

    int vowelNum = 0;
    int aNum = 0;
    int eNum = 0;
    int iNum = 0;
    int oNum = 0;
    int uNum = 0;

    const char vowel1 = 'a';
    const char vowel2 = 'e';
    const char vowel3 = 'i';
    const char vowel4 = 'o';
    const char vowel5 = 'u';

    // iterates through the word characters and checks each vowel

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == vowel1) {
            std::cout << "Found an 'a'\n";
            vowelNum++;
            aNum++;
        } else if (word[i] == vowel2) {
            std::cout << "Found an 'e'\n";
            vowelNum++; 
            eNum++;
        } else if (word[i] == vowel3) {
            std::cout << "Found an 'i'\n";
            vowelNum++;
            iNum++;
        } else if (word[i] == vowel4) {
            std::cout << "Found an 'o'\n";
            vowelNum++;
            oNum++;
        } else if (word[i] == vowel5) {
            std::cout << "Found a 'u'\n";
            vowelNum++;
            uNum++;
        }
    }

    if (vowelNum == 0) {
        std::cout << "There are" << vowelNum << "vowels in your word.\n";
    } else {
        std::cout << "There are " << vowelNum << " vowels in your word, " << aNum << " a's in your word, " << eNum << " e's in your word. " << iNum << " i's in your word, " << oNum << " o's in your word, and" << uNum << " u's in your word.\n";
    }

    close();
}

void consonantCount() {

    // variable declarations

    int consonantNum = 0;

    const char consonant1 = 'b'; 
    const char consonant2 = 'c';
    const char consonant3 = 'd';
    const char consonant4 = 'f';
    const char consonant5 = 'g';
    const char consonant6 = 'h';
    const char consonant7 = 'j';
    const char consonant8 = 'k';
    const char consonant9 = 'l';
    const char consonant10 = 'm';
    const char consonant11 = 'n';
    const char consonant12 = 'p';
    const char consonant13 = 'q';
    const char consonant14 = 'r';
    const char consonant15 = 's';
    const char consonant16 = 't';
    const char consonant17 = 'v';
    const char consonant18 = 'w';
    const char consonant19 = 'x';
    const char consonant20 = 'y';
    const char consonant21 = 'z';

    // checks all the consonants 

    for (int i = 0; i <= word.size(); i++) {

        // apparently switch statements dont work with char variables..?

        if (word[i] == consonant1) {
            std::cout << "Found a 'b'\n";
            consonantNum++;
        } else if (word[i] == consonant2) {
            std::cout << "Found a 'c'\n";
            consonantNum++;
        } else if (word[i] == consonant3) {
            std::cout << "Found a 'd'\n";
            consonantNum++;
        } else if (word[i] == consonant4) {
            std::cout << "Found an 'f'\n";
            consonantNum++;
        } else if (word[i] == consonant5) {
            std::cout << "Found a 'g'\n";
            consonantNum++;
        } else if (word[i] == consonant6) {
            std::cout << "Found a 'h'\n";
            consonantNum++;
        } else if (word[i] == consonant7) {
            std::cout << "Found a 'j'\n";
            consonantNum++;
        } else if (word[i] == consonant8) {
            std::cout << "Found a 'k'\n";
            consonantNum++;
        } else if (word[i] == consonant9) {
            std::cout << "Found an 'l'\n";
            consonantNum++;
        } else if (word[i] == consonant10) {
            std::cout << "Found an 'm'\n";
            consonantNum++;
        } else if (word[i] == consonant11) {
            std::cout << "Found an 'n'\n";
            consonantNum++;
        } else if (word[i] == consonant12) {
            std::cout << "Found a 'p'\n";
            consonantNum++;
        } else if (word[i] == consonant13) {
            std::cout << "Found a 'q'\n";
            consonantNum++;
        } else if (word[i] == consonant14) {
            std::cout << "Found an 'r'\n";
            consonantNum++;
        } else if (word[i] == consonant15) {
            std::cout << "Found an 's'\n";
            consonantNum++;
        } else if (word[i] == consonant16) {
            std::cout << "Found a 't'\n";
            consonantNum++;
        } else if (word[i] == consonant17) {
            std::cout << "Found a 'v'\n";
            consonantNum++;
        } else if (word[i] == consonant18) {
            std::cout << "Found a 'w'\n";
            consonantNum++;
        } else if (word[i] == consonant19) {
            std::cout << "Found an 'x'\n";
            consonantNum++;
        } else if (word[i] == consonant20) {
            std::cout << "Found a 'y'\n";
            consonantNum++;
        } else if (word[i] == consonant21) {
            std::cout << "Found a 'z'\n";
            consonantNum++;
        }

    }

    std::cout << "There are " << consonantNum << " consonants in your word.\n";

    close();
}

void concatenate() {

    // variable declarations

    std::string word2;
    std::string spaceInBetweenWords;

    std::cout << "Enter the word that you want to add on to " << word << ":\n";
    std::cin >> word2;
    std::cout << "Do you want a space in between the words? [y/n]\n";
    std::cin >> spaceInBetweenWords;
    std::cout << "\n\n";

    if (spaceInBetweenWords == "y" || spaceInBetweenWords == "yes") {
        std::cout << word << " " << word2;
    } else {
        std::cout << word << word2;
    }

    close();
}

void wordInput() {
    std::cout << "Enter your word here:\n";
    std::cin >> word;
    wordCheck();
}

void wordCheck() {
    std::string input;

    std::cout << "\n\nDo you want to find the length, the amount of vowels, the amount of consonants in your word, or concatenate the inputted word with another word?\n";
    std::cout << "length, vowels, consonants, concatenate\n";
    std::cin >> input;

    if (input == "length") {
        length();
    } else if (input == "consonants") {
        consonantCount();
    } else if (input == "vowels") {
        vowelCount();
    } else if (input == "concatenate") {
        concatenate();
    } else {
        std::cout << "Not an input.\n\n";
        wordCheck();
    }
}

int main() {
    wordInput();
}
