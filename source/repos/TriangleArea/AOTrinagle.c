#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double base, height, area;

	printf("Please enter the height and the base of the trinagle\n");
	scanf("%lf%lf", &base, &height);

	area = base + height * 0.5;

	printf("The area of the triangle is %.2f", area);

	return 0;

}