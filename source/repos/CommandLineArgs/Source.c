#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//Must be run through debug folder of project on cmd
int main(int argc, char* argv[])
{
	
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]); //atoi is a function included in stdlib.h

	}

	printf("The total of all numbers = %d", sum);




	return 0;
}