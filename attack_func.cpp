
int Enemy::attack(Player $x)
{
	if (x.getBoolDef() == true)
	{
		int damageDone = this->getAtk() - x.getDefense();
		if (damageDone > 0)
		{
			x.setDmgTaken(damgeDone);
			x.setBoolDef(false);
			return damageDone;
		}
		else
		{	
			x.setBoolDef(false);
			return 0;
		}
	}
	else
	{
		int damageDone1 = this->getAtk()
		x.setDmgTaken(damageDone1);
		return damageDone1;
	}
}

int Player::attack(Enemy &x)
{
	if (x.getBoolDef() == true)
	{
		int damageDone == this->getAtk() - x.getDefense();
		if (damageDone > 0)
		{
			x.setDmgTaken(damageDone);
			x.setBoolDef(false);
			return damageDone;
		}
		else
		{
			x.setBoolDef(false);
			return 0;
		}
	}
	else
	{
		int damageDone1 = this->getAtk()
		x.setDmgTaken(damageDone1);
		return damageDone1;
	}
}
