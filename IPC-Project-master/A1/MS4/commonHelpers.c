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
		// On Purpose: do nothing
	}
}

int getInteger(void)
{

	char newLine = 'X';
	int value = 0;


	while (newLine != '\n')
	{

		scanf("%d%c", &value, &newLine); //Scans the user input into value and newLine

		if (newLine == '\n') //Is newLine equal to new line, if yes return value and end the function
		{

		}

		else //If newLine is not equal to new line, clear input buffer and print error message
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
		PositiveInt = getInteger(); //Passes value of PositiveInt into getInteger function

		if (PositiveInt <= 0) //Is the value of PositiveInt less than or equal to 0? if it is, then print out error message
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

		scanf("%lf%c", &value, &newLine); //Scan user input into value an newLine

		if (newLine == '\n') //Is newLine equal to a new line, if it is then the function returns value and ends
		{

		}

		else //Is newLine not equal to a new line, then clear input buffer and print error statment
		{
			clearStandardInputBuffer();
			printf("ERROR: Value must be a double floating-point number: ");
		}


	}

	return value;
}

double getPositiveDouble(void)
{
	double PositiveDouble = 0.0;

	while (PositiveDouble <= 0.0) {
		PositiveDouble = getDouble(); //Passes value from PositiveDoubl einto getDouble function

		if (PositiveDouble <= 0.0) //Is value of positive double less than or equal to 0.0? If it is, then print out error statment
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

char getCharOption(const char* listofChars)
{

	int i, flag = 0;
	char userChar;
	
	char inputStr[31]; //inputStr is mean to hold the string inputted from the user, 31 is a number I randomly chose, based off of getCString
	int stringLen;

	while (flag == 0)
	{
		
		scanf("%30s", inputStr); //Scans 30 chars of the user string
		userChar = inputStr[0];
		

		for (i = 0; inputStr[i] != '\0'; i++) //Count length of the user's input until the end of the string is reached
		{

		}
		stringLen = i;
		

		if (stringLen > 1) //Is string length more than 1
		{
			//If it is more than 1, print out error statment
			printf("ERROR: Character must be one of [%s]: ", listofChars);
		}
		else
		{

			for (i = 0; listofChars[i] != '\0'; i++) //Looks through list of valid characters until it reaches the end of the list (Null or \0)
			{
				if (listofChars[i] == userChar) //Looking in the list to see if it matches will user input
				{
					flag = 1; //Set to 1 if there is a match
				}
			}

			if (flag == 0) //If no match was found in the list from the for loop, print out error message
			{
				
				printf("ERROR: Character must be one of [%s]: ", listofChars);
			}
		}
		clearStandardInputBuffer();
	}

	return userChar;
}

void getCString(char* str, int min, int max)
{

	int i;
	int flag = 0;
	int stringLen = 0;
	char correctStr[31]; //Holds string inputted from the user, 31 is a random number choosen


	while (flag == 0)
	{
		scanf("%30[^\n]", correctStr);

		for (i = 0; correctStr[i] != '\0'; i++) //Count length of the user's input
		{

		}
		stringLen = i;

		if (min == max && (stringLen != max))
		{
			printf("ERROR: String length must be exactly %d chars: ", max);
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


	for (i = 0; i < stringLen + 1; i++) //Copying every value in correctStr to str
	{
		str[i] = correctStr[i];
	}

	//No return needed since, void specifies nothing is returned at the begining

}
