#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//Must be run through debug folder of project on cmd
int main(int argc, char* argv[])
{

	int i, j, lower, upper, number, num[10], excluded[10];

	printf("Please enter the lower and upper bounds for your random numbers!\n");
	scanf("%d%d", &lower, &upper);

	for (i = 0; i < argc; i++)
	{
		excluded[i] = atoi(argv[i]); //atoi is a function included in atdlib.h

	}

	for (i = 0; i < 10; i++) 
	{
		number = lower + rand()% (upper - lower); // generates a random number between a and b

		for (j = 1; j<argc; j++)
		{
			if (number == excluded[j]) 
			{
				break;
			}

		}
		if (j == argc)
		{
			num[i] = number; //a valid (non-excluded number) random number

		}
		else //Neutrailizes impact of number being added
		{
			i--;
		}
	}
	
	//display all valid random number
	for (i = 0; i < 10; i++)
	{
		printf("%5d", num[i]);
	}

	return 0;
}