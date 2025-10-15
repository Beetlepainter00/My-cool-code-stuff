#include <stdio.h>

int main()
{
	int currentLevel = 5;
	float currentHealth = 10.0f;
	int livesRemaining = 3;
	bool isGamePaused = false;
	
	//can't figure out character array, found this piece of code online:
	char firstName[30];
	printf("Enter your first name and press enter: \n");
	scanf_s("%s", firstName, 30);
	printf("Hello %s", firstName);
	//however this didn't work for some reason

	

	printf("Current player status:\n");
	printf("Player level: %i\n",currentLevel);
	printf("Player health: %0.1f\n", currentHealth);
	printf("Lives remaining: %i\n", livesRemaining);
	printf("Is game paused: %s", isGamePaused ? "true" : "false");
	//%s is print next argument as string, have to provide strings for bool 
	
	
	
	return 0;
}