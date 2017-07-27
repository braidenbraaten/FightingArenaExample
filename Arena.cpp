#include "Arena.h"

#include <string>
//using namespace std;
Arena::Arena(Player &p, Enemy &e)
{
	playerInstance = p;
	enemyInstance = e;

	startFight = false;
	playerIsVictor = false;
	playersTurn = true;
}

Arena::Arena()
{
	
}

Arena::~Arena()
{
}

void Arena::BattleSequence()
{
	while (leaveArena == false)
	{
		InitBattle();

		if (leaveArena) break;

		BattleOptions(true);
		if (startFight)
		{
			Fight(playerInstance, enemyInstance);
		}

	}

	

}

void Arena::InitBattle()
{
	bool canPass = false;
	cout << "Welcome to the Fight of your life!" << endl;

	while (canPass == false)
	{


		cout << "Would you like to [F]ight or [R]un from " << endl;
		cin >> response;
		switch (response)
		{
		case 'f':
		case 'F':
			startFight = true;
			canPass = true;
			break;
		case 'r':
		case 'R':
			FleeText();
			startFight = false;
			canPass = true;
			break;

		default:
			cout << "Sorry but that is incorrect, plz try again" << endl;
			canPass = false;
			break;
		}

	}

	canPass = false;



}


void Arena::Fight(Player &p, Enemy &e)
{
	bool isPlayer;
	if (playersTurn)
	{
		isPlayer = true;

		//BattleOptions(isPlayer);
		NumberCrunch();

		playersTurn = false;
	}
	else
	{
		playersTurn = true;
	}
}

void Arena::FleeText()
{
	cout << "You decided to flee, lets go back and regroup with the others" << endl;
	leaveArena = true;
}

void Arena::BattleOptions(bool isPlayer)
{
		

	if (isPlayer)
	{
		cout << "You chose to fight, Here are your options" << endl;
		cout << "[C]hange weapons, [S]ee Health, [D]efend next, [F]ight" << endl;
		cin >> response;

		switch (response)
		{
		case 'c':
		case 'C':
			playerInstance.WeaponSelection();
			startFight = false;
			break;
		case 's':
		case 'S':
			cout << "Health: " << playerInstance.gethealth() << endl;
			startFight = false;
			break;
		case 'd':
		case 'D':
			p_shield = playerInstance.Defend();
			startFight = true;
			break;
		case 'f':
		case 'F':
			p_damage = playerInstance.Attack();
			startFight = true;
			break;

		default:
			break;
		}
	}

}

void Arena::setPlayerInstance(Player &p)
{
	playerInstance = p;
}

void Arena::setEnemyInstance(Enemy & e)
{
	enemyInstance = e;
}

void Arena::NumberCrunch()
{

	if (playerInstance.Attack() >= enemyInstance.getShield())
	{

		p_damage = playerInstance.Attack() - enemyInstance.getShield();
	}
	else
	{
		p_damage = playerInstance.Attack();
	}

	if (enemyInstance.Attack() >= playerInstance.getShield())
	{
		e_damage = enemyInstance.Attack() - playerInstance.getShield();
	}
	else
	{
		e_damage = enemyInstance.Attack();
	}

	playerInstance.setHealth(playerInstance.gethealth() - e_damage);
	enemyInstance.setHealth(enemyInstance.gethealth() - p_damage);

	if (playerInstance.gethealth() > 0 && enemyInstance.gethealth() > 0)
	{
		cout << "You Attacked the enemy for " << p_damage << " Damage" << endl;
		cout << "They attacked you for " << e_damage << " Damage" << endl;
		cout << "Your health is now at " << playerInstance.gethealth() << endl;
		cout << "their health is now at " << enemyInstance.gethealth() << endl;
	}
	else if (playerInstance.gethealth() <= 0)
	{
		cout << "YOU HAVE DIED, GG M8!" << endl;
		leaveArena = true;
	}
	else
	{
		cout << "YOU HAVE KILLED THE ENEMY! HUPLAH! HUPLAH!" << endl;
		leaveArena = true;
	}
}

Player & Arena::getPlayerInstance()
{
	// TODO: insert return statement here
	return playerInstance;
}

Enemy & Arena::getEnemyInstance()
{
	return enemyInstance;
}
