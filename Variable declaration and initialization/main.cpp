#include <stdio.h>

int main()
{

	int enemyCount = 5;
	float gameTime = 3.5f;
	char playerRank = 'S';
	
	printf("Current enemy count is %i", enemyCount);
	printf("\nCurrent game time is %0.1f", gameTime);
	printf("\nCurrent player rank is %c", playerRank);
	
	

	char input;
	printf("Enter a character:\n");
	scanf_s(" %c", &input, 1);

	
	return 0;
}