#include <iostream>
#include <regex>
#include "player.h"
#include "slowPrints.h"
#include "GeneratePlayer.h"

#include <chrono>
#include <thread>
using namespace std;

void AskForName(Player& p) {
    string name;
    slowStringPrint("An old, rough looking man awakens you...\n", "Old Man: ");
    cout << "Old Man: ";
    slowStringPrint("Ah... it seems we have a new addition. Do you remember your name?\n", "Old Man: ");
    cout << "You: My name is ";
    cin >> name;
    cout << "Old Man: ";
    slowStringPrint("Well, " + name + ", I'm happy you at least remember that much. People like you and I just seem to randomly appear down here with very little memory.\n", "Old Man: ");
    p.setName(name);
}

void AskForType(Player& p) {
    string type = "";
    cout << "Old Man: ";
    slowStringPrint("Right now we are on the bottom level of a dungeon. There aren't a lot of monsters here, but that is not the case for the other levels. The higher you go, the more dangerous it will get.\n", "Old Man: ");
    cout << "         ";
    slowStringPrint("I hope you remember at least some fighting basics... What kind of fighter are you?\n\n", "Old Man: ");
    cout << "         ";
    cout << "*** Enter the name (in all caps) of the class type you would like to choose: ***\n\n";
    cout << "          *I'm a BRUTE. I never run from a fight and handle everything head on. \n                Brutes have above average attack power and health, but are slower than others.\n";
    cout << "          *I'm a SPEEDSTER. I'm light on my feet and will strike hard and fast when you least expect it. \n                Speedsters have above average speed and attack power, but have less health than others.\n";
    cout << "          *I'm a GUARDIAN. I'm always the last one standing at the end of a battle. \n                Guardians have above average health and defense, but their attacks are weaker than others\n";
    while (type != "BRUTE" && type != "SPEEDSTER" && type != "GUARDIAN") {
        cout << "\n" << p.getName() << ": I'm a ";
        cin >> type;
        regex r("\\s+");
        type = regex_replace(type, r, "");
        if (type == "BRUTE") {
            p.setAtk(15);
            p.setDefense(10);
            p.setSpd(5);
            p.setMaxHealth(150);
        }
        else if (type == "SPEEDSTER") {
            p.setAtk(15);
            p.setDefense(10);
            p.setSpd(15);
            p.setMaxHealth(100);
        }
        else if (type == "GUARDIAN") {
            p.setAtk(5);
            p.setDefense(15);
            p.setSpd(10);
            p.setMaxHealth(150);
        }
        else {
            cout << "         *** Not a valid class type! Enter 'BRUTE', 'SPEEDSTER', or 'GUARDIAN'! ***";
        }
    }
}

void GeneratePlayer(Player& p) {
    AskForName(p);
    AskForType(p);
}