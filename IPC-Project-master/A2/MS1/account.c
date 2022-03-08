#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> //Used for character manipulation and analysis
#include "commonHelpers.h"
#include "account.h"
#include "accountTicketingUI.h"

void getAccount(struct Account* ptrAccount) //ptr symbolizes pointer to account
{

	printf("Account Data: New Record");
	printf("\n----------------------------------------\n");

	printf("Enter the account number: \n");
	ptrAccount->AccntNum = getPositiveInteger(); //passing value from ptrAccount.AccntNum to getPositiveInteger

	printf("\nEnter the account type: ");
	ptrAccount->AccntType = getCharOption("AC"); //passing value from ptrAccount.AccentType to getCharOption and setting parameters to chars AC

	if (ptrAccount->AccntType == 'A') //If AccentType is equal to A, prompt the user for User Login information
	{
		getPerson(&ptrAccount->person); //Call getPerson function
		getuserLogin(&ptrAccount->user); //Cal getuserLogin function
		
		printf("\n*** New account added! ***");

		pauseExecution();
	}

	else if (ptrAccount->AccntType == 'C') //If AccentType is equal to C, do not prompt the user for User Login information
	{
		ptrAccount->user.UserName[0] =  '\0'; //Assigning username to safe empty state
		getPerson(&ptrAccount->person); //Call getPerson function
		printf("Name: %s", ptrAccount->person.Name);
		printf("\n*** New account added! ***");

		pauseExecution();
	}
	
}

void getPerson(struct Person* ptrPerson)
{
	int i;
	printf("\nPerson Data Input");
	printf("\n----------------------------------------\n");
	printf("Enter the person's full name (30 chars max): ");
	getCString(ptrPerson->Name, 1, 30); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 30 chars
	
	printf("Enter birth year (current age must be between 18 and 110): ");

	ptrPerson->birthYear = getIntFromRange(currentYear() - 200, currentYear() - 108);  //High numbers needed since currentYear(); started from 2111 and not 2021
																						      //Function works just by getting the required years from currentyear - #
	printf("Enter the household Income: $");
	ptrPerson->Income = getPositiveDouble(); //passing value from ptrAccount person.income to getPositiveDoubleFunction

	printf("Enter the country (30 chars max.): ");
	getCString(ptrPerson->Country,1,30); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 30 chars
	getStringAllCaps(ptrPerson->Country);
	
}

void getuserLogin(struct UserLogin* ptrUserLogin)
{
	
	printf("\nUser Login data Input");
	printf("\n----------------------------------------\n");
	printf("Enter user login (10 chars max): ");
	
	getCString(ptrUserLogin->UserName, 1, 10); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 10 chars for the usernae
	//Use isspace to check for whitespaces
	//Check to see if there are any whitespace charcters in the username (May be better to use this code in function and just pass the username to it)
	if (isspace(ptrUserLogin->UserName)) //If there is a whitespace, print error message
	{
		printf("ERROR:  The user login must NOT contain whitespace characters.");
	}
	printf("\nEnter the password (must be 8 chars in length): ");
	getCString(ptrUserLogin->passwd, 8, 8); //passing value from ptrAccount to getCString and making getCString have a limit of only 8 chars for the password
	passwordChecker(ptrUserLogin->passwd);
	
}

void updateAccount(struct Account* ptrAccount)
{
	int numOption;
	char accountTypechange;
	int flag = 0;

	while (flag == 0)
	{
		printf("\nUpdate Account: %d (%s)", ptrAccount->AccntNum, ptrAccount->person.Name);
		printf("\n----------------------------------------\n");
		printf("1) Update account type (current value: %c)\n", ptrAccount->AccntType);
		printf("2) Person\n");
		printf("3) Login\n");
		printf("0) Done\n");
		printf("Selection: \n");

		numOption = getIntFromRange(0, 3);

		if (numOption == 1) //If user selects option 1
		{
			printf("\nEnter the account type (A=Agent | C=Customer): ");
			ptrAccount->AccntType = getCharOption("AC");

			if (ptrAccount->AccntType == 'A')
			{
				printf("\nAgent type accounts require a user login. Please enter this information now:\n");
				//Call for function to get the user login info
				getuserLogin(&ptrAccount->person); //Calling Person Struct
			}

			else if (ptrAccount->AccntType == 'C')
			{
				ptrAccount->user.UserName[0] = '\0'; //Setting user login to safe empty state
			}
		}

		if (numOption == 2) //If user selects option 2
		{
			//call function updatePerson
			updatePerson(&ptrAccount->person); //Calling Person struct

		}

		if (numOption == 3) //If user selects option 3
		{

			if (ptrAccount->AccntType == 'A') //Is accntType equal to A? If yes, call function updatePerson
			{
				//Call updateUserLogin
				updateUserLogin(&ptrAccount->person); //Calling person struct
			}

			else if (ptrAccount->AccntType == 'C') //Is AccntType equal to C. If yes print error message
			{
				printf("\nError: Customer account types don't have logins!");
			}
		}

		if (numOption == 0) //If user selections option 0, exit the function
		{
			flag = 1; //Ending the function
		}
	}
	

}

void updatePerson(struct Person* ptrPerson)
{
	int numOption;
	int flag = 0;

	while (flag == 0)
	{
		printf("\nPerson Update Options");
		printf("\n----------------------------------------\n");
		printf("1) Full name (current value: %s)\n", ptrPerson->Name);
		printf("2) Househole Income (current value: $%.2lf)\n", ptrPerson->Income);
		printf("3) Country (current value: %s)\n", ptrPerson->Country);
		printf("0) Done\n");
		printf("Selection: \n");

		numOption = getIntFromRange(0, 3);

		if (numOption == 1) //If user selects option 1
		{
			printf("\nEnter the person's full name (30 chars max): "); //prompt user to update name
			getCString(ptrPerson->Name, 1, 30);

		}

		if (numOption == 2) //If user selects option 2
		{
			printf("\nEnter the household Income: $"); //Prompt user to update income
			ptrPerson->Income = getPositiveDouble();
		}

		if (numOption == 3) //If user selects option 3
		{
			printf("\nEnter the country (30 chars max.): "); //Prompt user to update their country
			getCString(ptrPerson->Country, 1, 30); //Passing value entered for country to getCString to make sure it meets the requirementys for the country string
			getStringAllCaps(ptrPerson->Country); //Passing string in country from person structre to convert the string to all caps
		}

		if (numOption == 0) //If user selects option 0
		{
			flag = 1; //End function
		}
	}

	
}

void updateUserLogin(struct UserLogin* ptrUserLogin)
{
	int numOption;
	int flag = 0;

	while (flag == 0)
	{
		printf("\nUser Login: %s - Update Options", ptrUserLogin->UserName);
		printf("\n----------------------------------------\n");
		printf("1) Password\n");
		printf("0) Done\n");
		printf("Selection: \n");

		numOption = getIntFromRange(0, 1);

		if (numOption == 1) //If user selects option 1
		{
			printf("\nEnter the password (must be 8 chars in length): \n");
			getCString(ptrUserLogin->passwd, 1, 30);
		}

		if (numOption == 0) //if user selects option 0
		{
			flag = 1; //Ends function
		}
	}
}

void passwordChecker(struct UserLogin* ptrUserLogin) //probably should make it return 1 if the password is accepted, 0 if not
{
	int i;
	int count = 0;

	for (i = 0; ptrUserLogin->passwd[i] != '\0'; i++) //For loop wll check every character in password array
	{
		if (isdigit(ptrUserLogin->passwd[i]))
		{
			printf("Digit found\n"); //debug
			count++;
		}
		
		if (isupper(ptrUserLogin->passwd[i]))
		{
			printf("Uppercase found\n"); //debug
			count++;
		}

		if (islower(ptrUserLogin->passwd[i]))
		{
			printf("lowercase found\n"); //debug
			count++;
		}
		if (ispunct(ptrUserLogin->passwd[i]))
		{
			printf("Symbol found\n"); //debug
			count++;
		}


		if (count != i) //If the value in count is not equal to the number in i, that means that the password was not accepted by the program
		{
			printf("SECURITY: Password must contain 2 of each:");
			printf("          Digit: 0-9\n");
			printf("          UPPERCASE character\n");
			printf("          lowercase character\n");
			printf("          symbol character: !@#$%^&*\n");
			//May want to return a value here, so this way the password can be rentered and checked again
		}

		else if (count == i) //If the value of count is equal to the value of i, means the password met the requirements and will work. Return 1
		{

		}

	}

	
}
	
void getStringAllCaps(struct Person* ptrPerson) //Functionw will take a string pointer and convert the string of the country from person struct to all caps
{
	int i;
	//For loop that will convert string in country to all caps
	for (i = 0; ptrPerson->Country[i] != '\0'; i++)
	{
		putchar (toupper(ptrPerson->Country[i])); //Passing string in country to toupper function from ctype library to convert string to all caps
	}

}



