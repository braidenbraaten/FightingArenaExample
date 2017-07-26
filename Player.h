#pragma once
#include "Human.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

class Player : Human
{

private:
	bool wrongAnswer = true;

public:
	char answer;
	


	void WeaponSelection();
	


	Player();
	~Player();
};

