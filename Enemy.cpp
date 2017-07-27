#include "Enemy.h"
#include <ctime>
#include <random>

Enemy::Enemy()
{
}

Enemy::Enemy(EnemyTypes chooseEnemyType)
{
	m_et = chooseEnemyType;
	

	switch (chooseEnemyType)
	{
	case DEATH_EATER:
		setDamage(1);
		setHealth(10);
		setShield(1);
		m_name = "Death Eater";

		break;
	case VOLDEMORT:
		setDamage(3);
		setHealth(20);
		setShield(2);
		m_name = "Voldemort";
		break;
	default:
		std::cout << "This is not an enemy type, please select a new one" << std::endl;
		break;
	}

}

Enemy::~Enemy()
{
}

int Enemy::Attack()
{
	return m_damage;
}

int Enemy::Defend()
{
	return getShield();
}

void Enemy::chooseRandomType()
{
	int RNG = 0;
	srand(time(NULL));
	RNG = rand() % 1 + 0; //1 is the max, 0 is the min

	switch (RNG)
	{
	case 0:
		m_et = EnemyTypes::DEATH_EATER;
		break;
	case 1:
		m_et = EnemyTypes::VOLDEMORT;
		break;

	default:
		break;
	}

}
