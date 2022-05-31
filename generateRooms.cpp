#include <iostream>
#include "generateRooms.h"

void generateRooms(vector<Room>& allRooms, Player& p) {
	Room TOWN("TOWN",
		"*This entire TOWN is underground. The little bit of light and warmth that exists here is from man made fires. Most of the buildings look like they're falling apart and are covered in ash.",
		"*The OLD MAN I talked to is here.",
		"*There's a WELL to the right and it looks like someone is sitting by it, and there's a LAKE to the left",
		"I've heard rumors of at least one person making it out of here before... If you think you can fight your way to the top maybe you can get some answers to why all of this happened, but then again maybe there isn't a way out at all.It's honestly up to you, would you rather die trying to escape or try to have some sort of a life down here?\n",
		"Old Man: ",
		"*There's a RAPIER leaning against a wall",
		"RAPIER");
	TOWN.setConnectedRoom("WELL");
	TOWN.setConnectedRoom("LAKE");
	Room WELL("WELL",
		"*This WELL doesn't look like it is in good shape either. The bucket connected to it is leaking and there's even ash in the water.",
		"*There's a young girl sitting against the well. ",
		"*There's a CAVE ENTRANCE up ahead and the TOWN I came from is behind me",
		"Laura says I can't get any closer to the cave. She said it has big scary monsters there guarding the entrance to the next level... \n",
		"Young Girl: ",
		"*It looks like there two POTIONS are inside the bucket",
		"POTIONS");
	WELL.setConnectedRoom("TOWN");
	WELL.setConnectedRoom("CAVE ENTRANCE");
	Room LAKE("LAKE",
		"*Smaller fish have started to eat the mutated fish's corpse. The smell is awful.",
		"",
		"*There's a CAVE ENTRANCE up ahead and the TOWN I came from is behind me",
		"",
		"",
		"*The fish's stomach was ripped open durring the fight... It looks like there is an ARMOR set inside of it",
		"ARMOR");
	LAKE.setConnectedRoom("TOWN");
	LAKE.setConnectedRoom("CAVE ENTRANCE");
	allRooms.push_back(TOWN);
	allRooms.push_back(WELL);
	allRooms.push_back(LAKE);
	p.move(TOWN);
}