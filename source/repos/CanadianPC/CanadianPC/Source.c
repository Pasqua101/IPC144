#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

#define SIZE 6
int postalCode(char*);

int main() {

	char pcode[7], valid[10];
	printf("Please enter a valid Canadian postal code");
	scanf_s("%6s", pcode);
	int result = postalCode(pcode);

	strcpy(valid, (result) ? "valid":"invalid");

	printf("%s code is %s Canadian Postal Code", pcode, valid);

	return 0;
}

int postalCode(char code[]) {
	
	//N8W5S3
	int i;

	for (i = 0; i < SIZE; i+=2) {
		if (!isalpha(code[i])) {
			return 0;
		}
	}

	for (i = 1; i < SIZE; i += 2) {
		if (!isdigit(code[i])) {
			return 0;
		}
	}
		

}