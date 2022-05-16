#include "Character.h"

class Player : public Character
{
	private:
		string type;

	public:
		Player(string playerClass, string name, int maxHealth, int atk, int defense, int spd);
		void setType(string playerClass);
		string getType() { return type; }

};


