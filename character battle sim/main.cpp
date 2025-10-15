#include <stdio.h>
#include <iostream> 
#include <thread> 
#include <chrono> 



int main()
{
	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; //specifing time
	int playerLoopCount = 0;
	int enemyLoopCount = 0;
	//player info
	int playerHealth;
	int playerAttack;
	bool playerDead = false;


	//enemy info
	int enemyHealth = 100;
	int enemyAttack = 15;
	bool enemyDead = false;

	printf("Enter your characters health:\n");
	scanf_s("%i", &playerHealth);
	printf("Enter your characters attack power:\n");
	scanf_s("%i", &playerAttack);

	while (playerDead != true && enemyDead != true)
	{
		//makes player take dmg
		if (enemyDead == false)
		{
			enemyLoopCount++;
			printf("player took %i damage!\n", enemyAttack);
			playerHealth -= enemyAttack;
		}

		sleep_for(500ms);
		//makes enemy take damage
		if (playerDead == false)
		{
			playerLoopCount++;
			printf("enemy took %i damage!\n", playerAttack);
			enemyHealth -= playerAttack;
		}
		
		

		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		if (playerHealth == 0)
		{
			playerDead = true;
		}
		if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		if (enemyHealth == 0)
		{
			enemyDead = true;
			
		}
		sleep_for(500ms);
		//system("pause");
	
	}
if (playerDead == true && enemyDead == false)
{

	printf("player dies! it took %i turns", enemyLoopCount);
}
else if (enemyDead == true && playerDead == false)
{
	printf("player wins! it took %i turns", playerLoopCount);

}
else
{
	printf("you tie!");
}

	return 0;
}