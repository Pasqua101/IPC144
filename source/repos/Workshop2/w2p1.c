/*
	==================================================
	Workshop #2 (Part-1):
	==================================================
	Name   : Marco Pasqua
	ID     : 100497213
	Email  : mpasqua@myseneca.ca
	Section: IPC144-NQQ
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) 
//{
//	float change; //Making change a float so it can store numbers digits
//	int toonies, loonies, quarters; //Coins will be an int so it won't display any digits
//	printf("Change Maker Machine\n");
//	printf("====================");
//
//	printf("\nEnter dollars and cents amount to convert to coins: $"); //Asking user to enter the amount of money they have
//	scanf("%f", &change);
//
//	//Conversion process for Toonies
//	toonies = change / 2; //Dividing the amount change by the value of a toonie, to find how many toonies are needed
//	change = change - (toonies *2.00); //To find remaining change, toonies will be multiplied by 2, and then will be subtracted by the amount of change
//	printf("\n$2.00 Toonies  X %d", toonies); 
//	printf(" (remaining: $%.2f)", change);
//	
//	//Coversion process for Loonies
//	loonies = change / 1; //Dividing the amount change by the value of a loonie, to find how many loonies are needed
//	change = change - loonies; //To find remaining change, loonies will be subtracted from the amount of change
//	printf("\n$1.00 Loonies  X %d", loonies); 
//	printf(" (remaining: $%.2f)", change);
//
//	//Conversion process for quarters
//	quarters = change / 0.25; //Dividing the amount change by the value of a quarter, to find how many quarters are needed
//	change = change - (quarters * 0.25); //To find remaining change, quarters will be multiplied by 0.25, and will then be subtracted by the amount of change
//	printf("\n$0.25 Quarters X %d", quarters);
//	printf(" (remaining: $%.2f)", change);
//
//	printf("\n");
//	printf("\nMachine error! Thank you for letting me keep $%.2f!", change); //Displaying how much change is left over at the end
//	return 0;
//
//}