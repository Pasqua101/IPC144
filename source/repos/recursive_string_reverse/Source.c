#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char*, int);

int main()
{
	char str[100];

	printf("Please enter a string");
	scanf("%100[^\n]s", str);
	reverse(str, strelen(str));


	return 0;

}

void reverse(char string[], int len)
{
	//base case
	if (len == 0)
	{
		return;
	}
	//recursive case
	else
	{
		reverse(string+1, len-1);
		printf("%c", *string);
	}


}

