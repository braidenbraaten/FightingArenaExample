#include "Player.h"



Player::Player()
{
	//hasChosen = new bool;
}


Player::~Player()
{
}


void Player::WeaponSelection()
{
	cout << "Welcome to the Weapon Selection menu" << endl;
	while (wrongAnswer == true)
	{
		
		cout << "What weapon type do you want to switch to?" << endl;
		cout << "[P]istol Type" << endl;
		cout << "[A]ssault Type" << endl;
		cout << "[S]niper Type" << endl;
		cout << "[L]MG Type" << endl;
		cin >> answer;

		switch (answer)
		{
		case 'p':
		case 'P':
			m_weapon.PistolMenu();
			wrongAnswer = false;
			break;
		case 'a':
		case 'A':
			m_weapon.AssaultMenu();
			wrongAnswer = false;
			break;
		case 's':
		case 'S':
			m_weapon.SniperMenu();
			wrongAnswer = false;
			break;
		case 'l':
		case 'L':
			m_weapon.LmgMenu();
			wrongAnswer = false;
			break;

		default:
			cout << "Did not recognize your answer, please try again" << endl;
			wrongAnswer = true;
			break;
		}

		

	}



	wrongAnswer = true;

}