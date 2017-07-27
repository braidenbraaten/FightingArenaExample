#include "Human.h"



Human::Human()
{
	
}


Human::~Human()
{
}

void Human::setHealth(int newHealth)
{
	m_health = newHealth;
}

int Human::gethealth()
{
	return m_health;
}

void Human::setShield(int newShield)
{
	m_shield = newShield;
}

int Human::getShield()
{
	return m_shield;
}

void Human::setSightRange(int newRange)
{
	m_sightRange = newRange;
}

int Human::getSightRange()
{
	return m_sightRange;
}

void Human::setXPos(int newXPos)
{
	m_xPos = newXPos;
}

int Human::getXPos()
{
	return m_xPos;
}

void Human::setDamage(int newDamage)
{
	m_damage = newDamage;
}

int Human::getDamage()
{
	return m_damage;
}
