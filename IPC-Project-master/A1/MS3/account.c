#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "commonHelpers.h"
#include "account.h"

void getAccount(struct Account* ptrAccount) //ptr symbolizes pointer to account
{

	printf("Account Data: New Record");
	printf("\n----------------------------------------\n");

	printf("Enter the account number: ");
	ptrAccount->AccntNum = getPositiveInteger(); //passing value from ptrAccount.AccntNum to getPositiveInteger

	printf("Enter the account type: ");
	ptrAccount->AccntType = getCharOption("AC"); //passing value from ptrAccount.AccentType to getCharOption and setting parameters to chars AC
	
}

void getPerson(struct Account* ptrAccount)
{

	printf("\nPerson Data Input");
	printf("\n----------------------------------------\n");
	printf("Enter the person's full name (30 chars max): ");
	getCString(ptrAccount->person.Name, 1, 30); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 30 chars

	printf("Enter birth year (current age must be between 18 and 110): ");

	ptrAccount->person.birthYear = getIntFromRange(currentYear() - 200, currentYear() - 108);  //High numbers needed since currentYear(); started from 2111 and not 2021
																						      //Function works just by getting the required years from currentyear - #
	printf("Enter the household Income: $");
	ptrAccount->person.Income = getPositiveDouble(); //passing value from ptrAccount person.income to getPositiveDoubleFunction

	printf("Enter the country (30 chars max.): ");
	getCString(ptrAccount->person.Country,1,30); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 30 chars

}

void getuserLogin(struct Account* ptrAccount)
{
	
	
	printf("\nUser Login data Input");
	printf("\n----------------------------------------\n");
	printf("Enter user login (10 chars max): ");
	getCString(ptrAccount->user.UserName,1,10); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 10 chars for the usernae

	printf("Enter the password (must be 8 chars in length): ");
	getCString(ptrAccount->user.passwd,8,8); //passing value from ptrAccount to getCString and making getCString have a limit of only 8 chars for the password
}



