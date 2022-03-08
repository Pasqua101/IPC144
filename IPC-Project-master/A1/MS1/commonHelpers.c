#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "commonHelpers.h"

//Uses the time.h library to obtain current year information
//Get the current 4-digit year from the system
int currentYear(void)
{
	time_t currentTime = time(NULL);
	return localtime(&currentTime)->tm_year + 1990;
}

//Empty the standard input buffer
void clearStandardInputBuffer(void)
{
	while (getchar() != '\n')
	{
		;// On Purpose: do nothing
	}
}

int getInteger(void)
{
	
	char newLine = 'X';
	int value = 0;


	while (newLine != '\n')
	{

		scanf("%d%c", &value, &newLine);

		if (newLine == '\n')
		{
			
		}

		else 
		{
			clearStandardInputBuffer();
			printf("ERROR: Value must be an integer: ");
		}

		
	} 

	return value;
}

int getPositiveInteger(void)
{
	int PositiveInt = 0;

	while (PositiveInt <= 0)
	{
		PositiveInt = getInteger();

		if (PositiveInt <= 0)
		{
			printf("ERROR: Value must be a positive integer greater than zero: ");
		}
	}

	
	return PositiveInt;
}

double getDouble(void)
{
	char newLine = 'X';
	double value;


	while (newLine != '\n')
	{

		scanf("%lf%c", &value, &newLine);

		if (newLine == '\n')
		{
			
		}

		else
		{
			clearStandardInputBuffer();
			printf("ERROR: Value must be an double floating-point number: ");
		}


	}

	return value;
}

double getPositiveDouble(void)
{
	double PositiveDouble = 0.0;

	while (PositiveDouble <= 0.0) {
		PositiveDouble = getDouble();

		if (PositiveDouble <= 0.0)
		{
			printf("ERROR: Value must be a positive double floating-point number: ");
		}
	}

	return PositiveDouble;
}


int getIntFromRange(int min, int max)
{
	int value = 0;
	int flag = 0;

	while (flag == 0)
	{
		value = getInteger();

		if (value >= min && value <= max) //Is value between min and max
		{
			flag += 1;
		}
		
		
		else //Is value not between min and max
		{
			printf("ERROR: Value must be between %d and %d inclusive: ", min, max);
		}

	}

	return value;
	

}

char getCharOption(const char* alpha)
{
	
	int i, flag = 0;
	char userChar;
	char newLine = 'X';

	while (flag == 0)
	{
		scanf(" %c%c", &userChar, &newLine);
		if (newLine != '\n')
		{
			clearStandardInputBuffer();
		}
		else
		{

			for (i = 0; i < 31 && (alpha[i] != '\0'); i++)
			{
				if (alpha[i] == userChar)
				{
					flag = 1;
				}
			}
			
			if (flag == 0)
			{
				printf("ERROR: Character must be one of [%s]:", alpha);
			}
		}
		
	}

	return userChar;
}

void getCString(char* str, int min, int max)
{
	
	int i;
	int flag = 0;
	int stringLen = 0;
	char correctStr[31];

	
	while (flag == 0)
	{
		scanf("%30[^\n]", correctStr);
		
		for (i = 0; correctStr[i] != '\0'; i++) //Count length of the user's input
		{

		}
		stringLen = i;

		if (min == max && (stringLen != max))
		{
			printf("ERROR: Must be exactaly %d chars: ", max);
		}
		
		else if (stringLen > max) //Is string length is greater than the max
		{
			
			printf("ERROR: String length must be no more than %d chars: ", max);
		}
		else if (stringLen < min) //Is string length less than the min
		{
			
			printf("ERROR: String length must be between %d and %d chars: ", min, max);
		}
		else if (stringLen >= min && stringLen <= max) //Is string length between minium and maximum
		{

			flag += 1;
		}
		clearStandardInputBuffer();
	}
	
	
	for (i = 0; i < 7; i++) //Copying every value in correctStr to str
	{
		str[i] = correctStr[i];
	}
	
	return str;
	
}
