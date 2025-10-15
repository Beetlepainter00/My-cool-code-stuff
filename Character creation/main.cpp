#include <stdio.h>
#include <iostream>
#include <algorithm> // Required for std::find


//classes = mage, barbarian, cleric, wizard, rogue, fighter, paladin
int main()
{
	char playerName[30];
	char Class/*[7] = {'m','b','c','w','r','f','p'}*/;
	int strength;
	int dex;
	int totalPoints;
	int extraPoints;
	
	
	printf("Enter character name:\n");
	scanf_s(" %s", &playerName, 30);
	printf("Enter character class:\n");
	scanf_s(" %c", &Class, 1);
	/*if (Class != 'm')
	{
		printf("test");
	}*/
	

	printf("Enter strength points:\n");
	scanf_s("%i", &strength);
	printf("Enter dexterity points\n");
	scanf_s("%i", &dex);

	totalPoints = strength + dex;
	extraPoints = totalPoints - 10;
	if ((totalPoints > 10) && totalPoints !=11)
	{
		printf("Character too powerful for starting level!\n using %i extra points", extraPoints);

	}
	else if  (totalPoints == 11)
	{
		printf("Character too powerful for starting level!\n using 1 extra point");
	}
	else
	{
		printf("\nCharacter's name: %s\n", playerName);
		printf("Character's class: %c\n", Class);
		printf("Strength: %i\n", strength);
		printf("Dexterity: %i", dex);
	}



	

	










	return 0;
}