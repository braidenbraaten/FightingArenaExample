#include "Player.h"
#include "Enemy.h"
#include "Arena.h"

//Arena arena;
Player player;



void Start()
{
	//player init stats
	player.setHealth(100);
	player.setDamage(1);
	player.setShield(2);

	//enemy init stats
	
	

	// = Arena(player, enemy);

}


int main()
{
	Start();

	Enemy enemy(EnemyTypes::VOLDEMORT);
	Arena arena(player, enemy);

	arena.BattleSequence();
	


	system("pause");


	

	return 0;
}
