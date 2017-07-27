#pragma once
#include "Player.h"
#include "Enemy.h"
//should allow the player to go up against an enemy



class Player;
class Enemy;

class Arena
{
public:

	Player playerInstance;
	Enemy  enemyInstance;
	int p_damage = 0, p_shield = 0;
	int e_damage = 0, e_shield = 0;

	bool playersTurn;
	bool playerIsVictor;
	bool startFight;
	bool enteredArena;
	bool leaveArena = false;
	Arena(Player &p, Enemy &e);
	Arena();
	~Arena();
	char response;

	//will hold the fight between the player and enemy
	void InitBattle();
	void Fight(Player &p, Enemy &e);
	void FleeText();
	void BattleOptions(bool);
	void setPlayerInstance(Player &p);
	void setEnemyInstance(Enemy &e);

	void BattleSequence();
	//compare stats of the player to the enemy
	void NumberCrunch();

	Player &getPlayerInstance();
	Enemy &getEnemyInstance();

};

