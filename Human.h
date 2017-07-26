#pragma once
//The Player and Enemy class will inherrit from this class
#include "Weapon.h"
class Human
{

protected:
	int   m_health;
	int   m_shield;
	float m_sightRange;
	Weapon m_weapon;


public:
	Human();
	~Human();
};

