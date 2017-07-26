#include "Weapon.h"

#include <iostream>

using namespace std;


//string Weapon::getWeaponName() {return m_currWeaponName;}


//void Weapon::switchWeapons(WeaponType wt, subWeaponType sub)
//{
//	m_currWeaponType = wt;
//
//	switch (wt)
//	{
//	case NO_WEAPON:
//		m_currWeaponType		=  WeaponType::NO_WEAPON;
//		m_subWeaponType.pistol  =  pistolType::NO_PISTOL;
//		m_subWeaponType.assault = assaultType::NO_ASSAULT;
//		m_subWeaponType.lmg     =     lmgType::NO_LMG;
//		m_subWeaponType.sniper  =  sniperType::NO_SNIPER;
//		cout << "No Weapon Catagory:";
//		break;
//	case PISTOLS:
//		m_currWeaponType        =  WeaponType::PISTOLS;
//		m_subWeaponType.assault = assaultType::NO_ASSAULT;
//		m_subWeaponType.lmg     =     lmgType::NO_LMG;
//		m_subWeaponType.sniper  =  sniperType::NO_SNIPER;
//		cout << "Pistol Weapon Catagory:";
//		switch (sub.pistol)
//		{
//		default:
//		case pistolType::NO_PISTOL:
//			m_subWeaponType.pistol = pistolType::NO_PISTOL;
//			cout << "No Pistol Sub-Catagory" << endl;
//			break;
//		case pistolType::MAGNUM:
//			m_subWeaponType.pistol = pistolType::MAGNUM;
//			cout << "Magnum Sub-Catagory" << endl;
//			break;
//		case pistolType::M9:
//			m_subWeaponType.pistol = pistolType::M9;
//				cout << "M9 Sub-Catagory" << endl;
//			break;
//		case pistolType::DESERT_EAGLE:
//			m_subWeaponType.pistol = pistolType::DESERT_EAGLE;
//			cout << "Desert Eagle Sub-Catagory" << endl;
//			break;
//		}
//
//		break;
//	case ASSAULT:
//		m_currWeaponType       = WeaponType::ASSAULT;
//		m_subWeaponType.pistol = pistolType::NO_PISTOL;
//		m_subWeaponType.lmg    =    lmgType::NO_LMG;
//		m_subWeaponType.sniper = sniperType::NO_SNIPER;
//		cout << "Assault Weapon Catagory:";
//		switch (sub.assault)
//		{
//		default:
//		case assaultType::NO_ASSAULT:
//			m_subWeaponType.assault = assaultType::NO_ASSAULT;
//			cout << "No Assault Sub-Catagory" << endl;
//			break;
//		case assaultType::SCAR_H:
//			m_subWeaponType.assault = assaultType::SCAR_H;
//			cout << "Scar-H Sub-Catagory" << endl;
//			break;
//		case assaultType::SCAR_L:
//			m_subWeaponType.assault = assaultType::SCAR_L;
//			cout << "Scar-L Sub-Catagory" << endl;
//			break;
//		}
//
//		break;
//	case SNIPER:
//		m_currWeaponType        =  WeaponType::SNIPER;
//		m_subWeaponType.assault = assaultType::NO_ASSAULT;
//		m_subWeaponType.lmg     =     lmgType::NO_LMG;
//		m_subWeaponType.pistol  =  pistolType::NO_PISTOL;
//		cout << "Sniper Weapon Catagory:";
//		switch (sub.sniper)
//		{
//		default:
//		case sniperType::NO_SNIPER:
//			m_subWeaponType.sniper = sniperType::NO_SNIPER;
//			cout << "No Sniper Sub-Catagory" << endl;
//			break;
//		case sniperType::BARRET:
//			m_subWeaponType.sniper = sniperType::BARRET;
//			cout << "Barret Sub-Catagory" << endl;
//			break;
//		case sniperType::INTERVENTION:
//			m_subWeaponType.sniper = sniperType::INTERVENTION;
//			cout << "Intervention Sub-Catagory" << endl;
//			break;
//		}
//
//
//		break;
//	case LMG:
//		m_currWeaponType        =  WeaponType::LMG;
//		m_subWeaponType.assault = assaultType::NO_ASSAULT;
//		m_subWeaponType.pistol  =  pistolType::NO_PISTOL;
//		m_subWeaponType.sniper  =  sniperType::NO_SNIPER;
//		cout << "LMG Weapon Catagory:";
//		switch (sub.lmg)
//		{
//		default:
//		case lmgType::NO_LMG:
//			m_subWeaponType.lmg = lmgType::NO_LMG;
//			cout << "No LMG Sub-Catagory" << endl;
//			break;
//		case lmgType::BELT_GUN:
//			m_subWeaponType.lmg = lmgType::BELT_GUN;
//			cout << "Belt-Gun Sub-Catagory" << endl;
//			break;
//		case lmgType::LONG_GUN:
//			m_subWeaponType.lmg = lmgType::LONG_GUN;
//			cout << "Long-Gun Sub-Catagory" << endl;
//			break;
//		}
//
//
//		break;
//	default:
//		break;
//	}
//
//
//}


void Weapon::PistolMenu()
{
	cout << "Welcome to the Pistol Menu, what Pistol would you like to choose?" << endl;
	
	while (!hasDecided)
	{
		cout << "[M]agnum" << endl << "M[9]" << endl << "[D]esert Eagle" << endl;
		cin >> response;
		switch (response)
		{
		case 'm':
		case 'M':
			switchWeapons(pistolType::MAGNUM);
			hasDecided = true;
			break;
		case '9':

			switchWeapons(pistolType::M9);
			hasDecided = true;
			break;
		case 'd':
		case 'D':

			switchWeapons(pistolType::DESERT_EAGLE);
			hasDecided = true;
			break;

		default:
			cout << "Did not recognize your answer, please try again" << endl;
			break;
		}

	}
	hasDecided = false;

}

void Weapon::AssaultMenu()
{
	cout << "Welcome to the Assault Menu, what AR would you like to choose?" << endl;

	while (!hasDecided)
	{
		cout << "Scar-[L]" << endl << "Scar-[H]" << endl;
		cin >> response;
		switch (response)
		{
		case 'l':
		case 'L':
			switchWeapons(assaultType::SCAR_L);
			hasDecided = true;
			break;
		case 'h':
		case 'H':

			switchWeapons(assaultType::SCAR_H);
			hasDecided = true;
			break;

		default:
			cout << "Did not recognize your answer, please try again" << endl;
			break;
		}

	}
	hasDecided = false;
}

void Weapon::SniperMenu()
{
	cout << "Welcome to the Sniper Menu, what Sniper would you like to choose?" << endl;

	while (!hasDecided)
	{
		cout << "[B]arret" << endl << "[I]ntervention" << endl;
		cin >> response;
		switch (response)
		{
		case 'b':
		case 'B':
			switchWeapons(sniperType::BARRET);
			hasDecided = true;
			break;
		case 'i':
		case 'I':

			switchWeapons(sniperType::INTERVENTION);
			hasDecided = true;
			break;

		default:
			cout << "Did not recognize your answer, please try again" << endl;
			break;
		}

	}
	hasDecided = false;
}

void Weapon::LmgMenu()
{
	cout << "Welcome to the LMG Menu, what LMG would you like to choose?" << endl;

	while (!hasDecided)
	{
		cout << "[L]ong-Gun" << endl << "[B]elt-Gun" << endl;
		cin >> response;
		switch (response)
		{
		case 'l':
		case 'L':
			switchWeapons(lmgType::LONG_GUN);
			hasDecided = true;
			break;
		case 'b':
		case 'B':

			switchWeapons(lmgType::BELT_GUN);
			hasDecided = true;
			break;

		default:
			cout << "Did not recognize your answer, please try again" << endl;
			break;
		}

	}
	hasDecided = false;
}

void Weapon::switchWeapons(pistolType pt)
{
	cout << "Pistol Weapon Catagory:";
	switch (pt)
	{
	default:
	case pistolType::NO_PISTOL:
		m_subWeaponType.pistol = pistolType::NO_PISTOL;
		cout << "No Pistol Sub-Catagory" << endl;
		break;
	case pistolType::MAGNUM:
		m_subWeaponType.pistol = pistolType::MAGNUM;
		cout << "Magnum Sub-Catagory" << endl;
		break;
	case pistolType::M9:
		m_subWeaponType.pistol = pistolType::M9;
		cout << "M9 Sub-Catagory" << endl;
		break;
	case pistolType::DESERT_EAGLE:
		m_subWeaponType.pistol = pistolType::DESERT_EAGLE;
		cout << "Desert Eagle Sub-Catagory" << endl;
		break;
	}
}

void Weapon::switchWeapons(assaultType at)
{
	cout << "Assault Weapon Catagory:";
	switch (at)
	{
	default:
	case assaultType::NO_ASSAULT:
		m_subWeaponType.assault = assaultType::NO_ASSAULT;
		cout << "No Assault Sub-Catagory" << endl;
		break;
	case assaultType::SCAR_H:
		m_subWeaponType.assault = assaultType::SCAR_H;
		cout << "Scar-H Sub-Catagory" << endl;
		break;
	case assaultType::SCAR_L:
		m_subWeaponType.assault = assaultType::SCAR_L;
		cout << "Scar-L Sub-Catagory" << endl;
		break;
	}
}

void Weapon::switchWeapons(sniperType st)
{
	cout << "Sniper Weapon Catagory:";
	switch (st)
	{
	default:
	case sniperType::NO_SNIPER:
		m_subWeaponType.sniper = sniperType::NO_SNIPER;
		cout << "No Sniper Sub-Catagory" << endl;
		break;
	case sniperType::BARRET:
		m_subWeaponType.sniper = sniperType::BARRET;
		cout << "Barret Sub-Catagory" << endl;
		break;
	case sniperType::INTERVENTION:
		m_subWeaponType.sniper = sniperType::INTERVENTION;
		cout << "Intervention Sub-Catagory" << endl;
		break;
	}
}

void Weapon::switchWeapons(lmgType lt)
{
	cout << "LMG Weapon Catagory:";
	switch (lt)
	{
	default:
	case lmgType::NO_LMG:
		m_subWeaponType.lmg = lmgType::NO_LMG;
		cout << "No LMG Sub-Catagory" << endl;
		break;
	case lmgType::BELT_GUN:
		m_subWeaponType.lmg = lmgType::BELT_GUN;
		cout << "Belt-Gun Sub-Catagory" << endl;
		break;
	case lmgType::LONG_GUN:
		m_subWeaponType.lmg = lmgType::LONG_GUN;
		cout << "Long-Gun Sub-Catagory" << endl;
		break;
	}
}

void Weapon::fire()
{
}

void Weapon::reload()
{
	if (m_ammoCount >= m_clipSize)
	{
		m_clipCount = m_clipSize;
	}
	else if(m_ammoCount > 0)
	{
		m_clipCount = m_ammoCount;
	}
	else
	{
		cout << "NO AMMO DUDE" << endl;
	}
	
	
	m_isReloading = true;

}

Weapon::Weapon()
{
	m_damage = 10;
	m_clipSize = 10;
	m_ammoCount = 100;
	m_reloadSpeed = 1.0f;
	m_isReloading = false;
	m_currWeaponType = WeaponType::NO_WEAPON;
	//m_currWeaponName = "No Weapon";
}


Weapon::~Weapon()
{
	
}
