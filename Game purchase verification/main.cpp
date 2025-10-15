#include <stdio.h>

int main()
{
	int age;
	char parentConsent;

	printf("Enter your age\n");
	scanf_s("%i", &age);

	if (age >= 17)
	{
		printf("purchase approved");

	}
	else
	{
		printf("Parental consent required.\n(Y/N) do you grant parental consent?\n");
			scanf_s(" %c", &parentConsent, 1);
			if (parentConsent == 'y' || parentConsent == 'Y')
			{
				printf("purchase approved");

			}
			else
			{
				printf("purchase denied");

			}

	}













	return 0;
}