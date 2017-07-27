#pragma once
//The Player and Enemy class will inherrit from this class
#include "Weapon.h"
class Human
{

protected:
	int   m_health = 0;
	int   m_shield = 0;
	int  m_damage = 0;
	int m_sightRange = 0;
	int m_xPos = 0;
	Weapon m_weapon;



public:
	Human();
	~Human();
	void setHealth(int newHealth);
	int gethealth();

	void setShield(int newShield);
	int getShield();

	void setSightRange(int newRange);
	int getSightRange();

	void setXPos(int newXPos);
	int getXPos();

	void setDamage(int newDamage);
	int getDamage();

	

};

