/*
	==================================================
	Workshop #2 (Part-2):
	==================================================
	Name   : Marco Pasqua
	ID     : 100497213
	Email  : mpasqua@myseneca.ca
	Section: IPC144-NQQ
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double cash; //User entered amount
	int toonies, loonies, quarters, dimes, nickels, pennies;
	int change_convert; //Change_convert for when the money entered is multiplied by 100
	float servicefee = 0.0;

	printf("Change Maker Machine\n");
	printf("====================");

	printf("\nEnter dollars and cents amount to convert to coins: $"); //User enters how much dollars and cents they have
	scanf("%lf", &cash);
	printf("Service fee (5.0 percent): 0.50");
	
	servicefee = cash * 0.05; //Finding how much the service fee is and then rounding it in the next step
	
	cash = cash - servicefee; //Finidng what the amount to convert is by subtracting the service from the cash entered
	printf("\nBalance to dispense: $%.2lf\n", cash);
	
	change_convert = cash * 100; //Multiplying user entered amount by 100 to make it into change
	change_convert = change_convert + 0.5; //Rounding up the converted amount to account for the %5 in the service fee

	//Conversion for toonies
	toonies = change_convert / 200; //Dividing change by the value of a toonie, which is 200 
	change_convert = change_convert % 200; //Finding how much change is left in change_convert and overwriting the variable with the new remainder
	printf("\n$2.00 Toonies  X %d (remaining: $%1.2lf)", toonies, (double)change_convert/100);

	//Conversion for loonies
	loonies = change_convert / 100; //Dividing change by the value of a loonie, which is 100
	change_convert = change_convert % 100; //Finding how much change is left in change_convert and overwriting the variable with the new remainder

	printf("\n$1.00 Loonies  X %d (remaining: $%1.2lf)", loonies, (double)change_convert/100);
	
	//Conversion for quarters
	quarters = change_convert / 25; //Dividing change by the value of a quarter, which is 25 
	change_convert = change_convert % 25; //Finding how much change is left in change_convert and overwriting the variable with the new remainder
	printf("\n$0.25 Quarters X %d (remaining: $%1.2lf)", quarters, (double)change_convert/100);

	//Conversion for dimes
	dimes = change_convert / 10; //Dividing change by the value of a dime, which is 10
	change_convert = change_convert % 10; //Finding how much change is left in change_convert and overwriting the variable with the new remainder
	printf("\n$0.10 Dimes    X %d (remaining: $%1.2lf)", dimes, (double)change_convert/100);

	//Conversion for nickels
	nickels = change_convert / 5; //Dividing change by the value of a nickel, which is 5 
	change_convert = change_convert % 5; //Finding how much change is left in change_convert and overwriting the variable with the new remainder
	printf("\n$0.05 Nickels  X %d (remaining: $%1.2lf)", nickels, (double)change_convert / 100);

	//Conversion for pennies
	pennies = change_convert / 1; //Dividing change by the value of a penny, which is 1
	change_convert = change_convert % 1; //Finding how much change is left in change_convert and overwriting the variable with the new remainder
	printf("\n$0.01 Pennies  X %d (remaining: $%1.2f)", pennies, (double)change_convert / 100);

	printf("\n");
	printf("\nAll coins dispensed!");

	return 0;

}