#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int count_spaces(char* str);
void reverse(char*, int);
int main() 
{
	char str[100];
	
		
	printf("Please enter a string\n");
	scanf("%100[^/n]s", str);
	printf("Number of spaces = %d", count_spaces(str));



	return 0;
}


int count_spaces(char* str)
{
	
	//base case
	if (strlen(str) == 0)
	{
		return 0;
	}

	if (*str == ' ') //if deferenced str == white space
	{
		return 1 + count_spaces(str + 1); //1 + 1 + 1
	}

	return count_spaces(str + 1);
}

