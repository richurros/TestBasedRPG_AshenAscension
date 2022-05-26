#pragma once
#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class Room
{
private:
	string name;
	string description;
	string NPCDialogue;
	string NPCName;
	string NPCsAvailable;
	string locationsAvailable;
	vector<string> connectedRooms;


public:
	Room();
	Room(string name,string description, string NPCsAvailable, string locationsAvailable, string NPCDialogue, string NPCName);
	string getName() { return name; }
	void setName(string name);
	string getDescription() { return description; }
	string getNPCsAvailable() { return NPCsAvailable; }
	string getLocationsAvailable(){ return locationsAvailable; }
	string getNPCDialogue() { return NPCDialogue; }
	string getNPCName() { return NPCName; }
	void setConnectedRooms(vector<string> cr);
	bool validMove(string r);
};
