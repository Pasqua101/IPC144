#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stringLen(char*);

int main() {
	
	char str[100];
	printf("Please enter a string\n");
	scanf("%100[^\n]s", str); //& not needed since str or array is a pointer, because array alway knows first address i.e str[0] = 'a' or str = &str[0]
	//%100[\^n]s reads up to 100 characters but won't stop until a new line is found. Will consider blank spaces when scanning. Stops once 100 characters is reached or enter is pressed

	printf("The length of \"%s\" = %d", str, stringLen(str)); // \" \" prints out double quote
	return 0;
}

int stringLen(char *s) {

	int count = 0;

	while (*s != '\0') { //or *s++ for parameters in while loop instead of s++ on lined 19
		//*s = 'T'; 

		count++;
		s++;
	}
		
	return count;
	
}