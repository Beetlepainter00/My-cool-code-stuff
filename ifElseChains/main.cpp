#include <stdio.h>

int main() //grandmaster, master, expert, novice
{
	int score;
	
	
	
	printf("enter your score (0-1000):\n");
	scanf_s("%i", &score);
	
	
	
	
	if (score > 1000)
	{
		printf("You sure? i think you might be lying\n");
	}
	else if (score == 999)
	{
		printf("Damn thats too bad, you're one point away");
	}
    else if (score >= 800)
	{
		printf("Your rank is Grandmaster\n");

	}
	else if (score >=600)
	{
		printf("Your rank is Master\n just %i point(s) to go!", 800 - score);

	}
	else if (score >=400)
	{
		printf("Your rank is Expert\n just %i point(s) to go!", 600 - score);

	}
	else if (score >=200)
	{
		printf("Your rank is Novice\n just %i point(s) to go!", 400 - score);

	}
	else if (score >= 0)
	{
		printf("Your rank is Beginner\n just %i point(s) to go!", 200 - score);

	}
	else
	{
		printf("what? how? are you stupid?\n just \"like a thousand\" points to go");
	}

	return 0;
}