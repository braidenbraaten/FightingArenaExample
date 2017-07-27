#pragma once
#include "Human.h"
#include "Weapon.h"
#include <string>
#include <iostream>
enum EnemyTypes {DEATH_EATER, VOLDEMORT};


class Weapon;
class Human;

class Enemy : public Human
{
private:
	//int m_damage;
	std::string m_name;


public:
	



	//m_EnemyTypes
	EnemyTypes m_et;

	Enemy();
	Enemy(EnemyTypes chooseEnemyType);
	~Enemy();

	//Weapon getWeapon();
	//void setWeapon(

	//should return the amt of damage towards the player
	int Attack();
	int Defend();

	void chooseRandomType();
};

