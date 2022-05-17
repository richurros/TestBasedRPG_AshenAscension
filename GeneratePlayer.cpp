#include <iostream>
#include "Player.h"
#include "SlowPrints.h"

#include <chrono>
#include <thread>
using namespace std;

string AskForName() {
    string name;
    slowStringPrint("An old, rough looking man awakens you...\n");
    cout << "Old Man: ";
    slowStringPrint("Ah... it seems we have a new addition. Do you remember your name?\n");
    cout << "You: My name is "; 
    cin >> name;
    cout << "Old Man: ";
    slowStringPrint("Well, "+name+", I'm happy you at least remember that much. People like you and I just seem to randomly appear down here with very little memory.\n");
    return name;
}

string AskForType() {
    int type;
    cout << "Old Man: ";
    slowStringPrint("Right now we are on the very bottom level of a dungeon. This level is relatively safe but that is not the case for the upper levels. The higher you go, the more dangerous it will get.\n");
    cout << "         ";
    slowStringPrint("I hope you remember at least some fighting basics... What kind of fighter are you?\n\n");
    cout << "         ";
    cout << "Enter the number of the Dialogue Option you would like to choose:\n\n";
    cout << "          1) I'm a brute. I never run from a fight and handle everything head on. \n              Brutes have above average attack power and health, but are slower than others.\n";
    cout << "          2) I'm a speedster. I'm light on my feet and will strike hard when you least expect it. \n              Speedsters have above average speed and attack power, but have less health than others.\n";
    cout << "          3) I'm a guardian. I'm always the last one standing at the end of a battle. \n              Guardians have above average health and defense, but their attacks are weaker than others\n";
    cout << "\nYou: ";
    cin >> type;
    if (type == 1) {
        return("brute");
    }
    else if (type == 2) {
        return("speedster");
    }
    else if (type == 3) {
        return("guardian");
    }
}

Player GeneratePlayer() {
    Player p("none", "name", 0, 0, 0, 0);
    string type;
    string name;
    name = AskForName();
    type = AskForType();
    if (type == "brute") {
        p.setAtk(15);
        p.setDefense(10);
        p.setSpd(5);
        p.setMaxHealth(150);
    }
    else if (type == "speedster") {
        p.setAtk(15);
        p.setDefense(10);
        p.setSpd(15);
        p.setMaxHealth(80);
    }
    else if (type == "guardian") {
        p.setAtk(5);
        p.setDefense(15);
        p.setSpd(10);
        p.setMaxHealth(150);
    }

    p.setName(name);
    p.setType(type);

    return p;
}

