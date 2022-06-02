#include "GeneratePlayer.h"
#include "generateRooms.h"
#include "combat.h"
#include "Enemy.h"
#include "player.h"
#include "slowPrints.h"
#include "sample.h"
#include "bag.h"
#include <iostream>
using namespace std;

int main()
{
    Player p;
    GeneratePlayer(p);
    vector<Room> allRooms;
    generateRooms(allRooms, p);
    cout << "Old Man: ";
    slowStringPrint("There's a mutated fish in the LAKE if you would like an easy target to test your blade on, or if you are thirsty and not looking for a fight right now you can check out our WELL. Oh, and before you go, I'm putting this healing potion in your backpack.\n", "Old Man: ");
    cout << "\n         Type 'HELP' at anytime for a list of available options \n";
    string input = "";
    string locationToGoTo;
    string itemToPickUp;
    cin.ignore(INT_MAX, '\n');
    while (input != "stop") {
        cout << p.getName() << ": ";
        getline(cin, input);
        if (input == "HELP") {
            cout << "        ~Available options are in all caps and must be typed exactly to work\n        Type LOOK AROUND to get a description of your surroundings, places you can move to, people you can tak to, and items you can pick up in an area\n        Type MOVE TO <area name in all caps given in LOOK AROUND>\n        Type TALK to speak to any NPCs that are around\n";
        }
        else if (input == "LOOK AROUND") {
            cout << "         ";
            slowStringPrint(p.getLocation().getDescription(), "         ");
            if (!(p.getLocation().getItemStatus())) {
                cout << "\n         ";
                slowStringPrint(p.getLocation().getItemsAvailable(), "         ");
            }
                cout << "\n         ";
                slowStringPrint(p.getLocation().getNPCsAvailable(), "         ");
            cout << "\n         ";
            slowStringPrint(p.getLocation().getLocationsAvailable(), "         ");
            cout << endl;
        }
        else if (input == "TALK") {
            cout << p.getLocation().getNPCName();
            slowStringPrint(p.getLocation().getNPCDialogue(), p.getLocation().getNPCName());
            cout << endl;
        }
        else if (input.find("MOVE TO ") == 0) {
            locationToGoTo = input.substr(8);
            if (p.getLocation().validMove(locationToGoTo)) {
                for (int i = 0; i < allRooms.size(); ++i) {
                    if (allRooms.at(i).getName() == locationToGoTo) {
                        p.move(allRooms.at(i));
                        if (p.getLocation().getName()=="LAKE") {
                            Enemy e("fish", 20, 5, 5, 1);
                            combat(p, e);
                        }
                    }
                }
                cout << p.getName() << ": ";
                slowStringPrint("I went to the " + p.getLocation().getName(), p.getName() + ": ");
                cout << endl;
            }
        }
        else if (input.find("PICK UP ") == 0) {
            itemToPickUp = input.substr(8);
            if (p.getLocation().getItemName()==itemToPickUp) {
                if (!(p.getLocation().getItemStatus())) {
                    for (int i = 0; i < p.getLocation().getNumOfItemsInRoom(); ++i) {
                        p.bInventory->addToBag(p.getLocation().bInventory->vBag.at(i));
                        cout << "Picked up a thing\n";
                    }
                    bool ItemsPickedUp = true;
                    //p.getLocation().setItemStatus(ItemsPickedUp);
                    p.getLocation()
                    cout << "Item Taken: " << p.getLocation().getItemStatus();
                    //if (p.getLocation().getItemStatus()) { cout << "Item WAS taken!\n"; }
                }
                else { cout << "You already picked that up!\n"; }
            }
            else {
                cout << "Not a recognized item\n";
            }
        }
        else if (input == "BACKPACK") {
            p.bInventory->printBag();

        }
        else {
            cout << "         Not a valid command! Type HELP for a list of available commands.\n";
        }

    }
}