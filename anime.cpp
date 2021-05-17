#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <fstream>

std::ofstream anime;

int main () {
    system("clear");

    std::srand(std::time(nullptr));

    // variable declarations

    int age[] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::string gender[] = {"Male", "Female", "Non Binary"};
    std::string boobSize[] = {"Small", "Medium", "Big"};
    std::string personality[] = {"Bouncy", "Innocent", "Sad", "Mean", "Shy", "Quiet"};
    std::string boyName[] = {"Kokichi", "Yumano", "Katamitsu", "Nagito", "Azuto"};
    std::string girlName[] = {"Alex", "Sakura", "Phoebe", "Maple", "Arirata", "Kiki"};
    std::string hairColour[] = {"Brown", "Black", "Blonde", "Red", "Blue"};
    std::string occupation[] = {"Student", "Fast Food Worker", "Model", "Actor"};
    std::string location[] = {"Tokyo, Japan", "Sapporo, Japan", "Yokohama, Japan", "Akita, Japan", "Sendai, Japan", "Nagoya, Japan", "Osaka, Japan", "Hiroshima, Japan", "Kitakyushu, Japan", "California, USA"};
    std::string hobbies[] = {"Murder", "Watching VTubers", "Flirting", "Doing nothing", "Having existential crises", "Sky diving", "Climbing"};

    // size variables

    int aLength = sizeof(age) / sizeof(age[0]);
    int gLength = sizeof(gender) / sizeof(gender[0]);
    int bLength = sizeof(boobSize) / sizeof(boobSize[0]);
    int pLength = sizeof(personality) / sizeof(personality[0]);
    int bnLenth = sizeof(boyName) / sizeof(boyName[0]);
    int gnLenth = sizeof(girlName) / sizeof(girlName[0]);
    int hLenth = sizeof(hairColour) / sizeof(hairColour[0]);
    int oLength = sizeof(occupation) / sizeof(occupation[0]);
    int lLength = sizeof(location) / sizeof(location[0]);
    int hoLength = sizeof(hobbies) / sizeof(hobbies[0]); 

    // random generation variables

    int ageRand = rand() % aLength;
    int genderRand = rand() % gLength;
    int boobRand = rand() % bLength;
    int personalityRand = rand() % pLength;
    int boyNameRand = rand() % bnLenth;
    int girlNameRand = rand() % gnLenth;
    int hairColourRand = rand() % hLenth;
    int nonBinaryNameRand = rand() % 1;
    int occupationRand = rand() % oLength;
    int livesRand = rand() % lLength;
    int hobbiesRand = rand() % hoLength;

    // output variables

    int a = age[ageRand];
    std::string g = gender[genderRand];
    std::string b = boobSize[boobRand];
    std::string p = personality[personalityRand];
    std::string bName = boyName[boyNameRand];
    std::string gName = girlName[girlNameRand];
    std::string h = hairColour[hairColourRand];
    std::string o = occupation[occupationRand];
    std::string l = location[livesRand];
    std::string ho = hobbies[hobbiesRand];

    anime.open("anime.txt");

    if (g == "Male") {
        anime << "Name: " << bName << "\n";
        std::cout << "Name: " << bName << "\n";
    } else if (g == "Female") {
        anime << "Name: " << gName << "\n";
        std::cout << "Name: " << gName << "\n";
    } else {
        if (nonBinaryNameRand == 0) {
            anime << "Name: " << bName << "\n";
            std::cout << "Name: " << bName << "\n";
        } else  {
            anime << "Name: " << gName << "\n";
            std::cout << "Name: " << gName << "\n";
        }
    }

    anime << "Age: " << a << "\n";
    std::cout << "Age: " << a << "\n";
    anime << "Gender: " << g << "\n";
    std::cout << "Gender: " << g << "\n";

    if (g == "Female" || nonBinaryNameRand == 1) {
        anime << "Boob Size: " << b << "\n";
        std::cout << "Boob Size: " << b << "\n";
    }

    anime << "Hair Colour: " << h << "\n";
    std::cout << "Hair Colour: " << h << "\n";
    anime << "Personality: " << p << "\n";
    std::cout << "Personality: " << p << "\n";
    anime << "Occupation: " << o << "\n";
    std::cout << "Occupation: " << o << "\n";
    anime << "Lives: " << l << "\n";
    std::cout << "Lives: " << l << "\n";
    anime << "Hobby: " << ho;
    std::cout << "Hobby: " << ho << "\n";
    anime.close();
    std::cin.get();
    system("clear");
    system("./menu.out");
}