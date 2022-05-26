#pragma once
#include <iostream>
#include "player.h"
#include "slowPrints.h"
#include "GeneratePlayer.h"

#include <chrono>
#include <thread>
using namespace std;

string AskForName() {
    string name;
    slowStringPrint("An old, rough looking man awakens you...\n", "Old Man: ");
    cout << "Old Man: ";
    slowStringPrint("Ah... it seems we have a new addition. Do you remember your name?\n", "Old Man: ");
    cout << "You: My name is ";
    cin >> name;
    cout << "Old Man: ";
    slowStringPrint("Well, " + name + ", I'm happy you at least remember that much. People like you and I just seem to randomly appear down here with very little memory.\n", "Old Man: ");
    return name;
}

string AskForType(string name) {
    string type;
    cout << "Old Man: ";
    slowStringPrint("Right now we are on the very bottom level of a dungeon. This level is relatively safe but that is not the case for the upper levels. The higher you go, the more dangerous it will get.\n", "Old Man: ");
    cout << "         ";
    slowStringPrint("I hope you remember at least some fighting basics... What kind of fighter are you?\n\n","Old Man: ");
    cout << "         ";
    cout << "Enter the all caps name of the class type you would like to choose:\n\n";
    cout << "          *I'm a BRUTE. I never run from a fight and handle everything head on. \n           Brutes have above average attack power and health, but are slower than others.\n";
    cout << "          *I'm a SPEEDSTER. I'm light on my feet and will strike hard when you least expect it. \n           Speedsters have above average speed and attack power, but have less health than others.\n";
    cout << "          *I'm a GUARDIAN. I'm always the last one standing at the end of a battle. \n           Guardians have above average health and defense, but their attacks are weaker than others\n";
    cout << "\n"<<name<<": I'm a ";
    cin >> type;
    if (type == "BRUTE") {
        return("brute");
    }
    else if (type == "SPEEDSTER") {
        return("speedster");
    }
    else if (type == "GUARDIAN") {
        return("guardian");
    }
}

Player GeneratePlayer() {
    Player p;
    string type;
    string name;
    name = AskForName();
    type = AskForType(name);
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

