#pragma once
#include "Human.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

class Player : public Human
{

private:
	bool wrongAnswer = true;
	int gold = 0;
	int xp = 0;
	int level = 0;
	
	
public:
	char answer;
	


	void WeaponSelection();
	int Attack();
	int Defend();


	Player();
	~Player();
};

