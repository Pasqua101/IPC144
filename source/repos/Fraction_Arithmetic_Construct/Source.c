#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int num; //Numerator
	int denom; //Denominator
	//char name[30][10];
}Fraction;

int main() {

	Fraction f1, f2, result; //, std
	
	printf("Please enter the value for your two fractions => num followed by denom ");
	scanf("%d%d", &f1.num, &f1.denom);
	scanf("%d%d", &f2.num, &f2.denom);

	printf("\nf1: is %d/%d", f1.num, f1.denom);

	printf("\nf2: is %d/%d", f2.num, f2.denom);

	//Multiplication

	result.num = f1.num * f2.num;
	result.denom = f1.denom * f2.denom;

	printf("\nMultipication result is %d/%d", result.num, result.denom);

	//Division
	
	result.num = f1.num * f2.denom;
	result.denom = f1.denom * f2.num;
	printf("\nDivision result is %d/%d", result.num, result.denom);

	//Addition

	result.num = f1.num * f2.denom + f2.num * f1.denom;
	result.denom = f1.denom * f2.denom;
	printf("\nAddition result is %d/%d", result.num, result.denom);

	//Subtraction

	result.num = f1.num * f2.denom - f2.num * f1.denom;
	result.denom = f1.denom * f2.denom;
	printf("\nSubtraction result is %d/%d", result.num, result.denom);

	//Messing with strings, focused on in a later week
	/*printf("\nPlease enter a name");
	scanf(" %s%s", &std.name, &std.name);

	printf("\nName: %s", std.name[0]);*/
	return 0;
}