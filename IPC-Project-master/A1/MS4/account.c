#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
	printf("Country is %s:", ptrPerson->Country);
}

void getuserLogin(struct UserLogin* ptrUserLogin)
{
	//Accept no white spaces, look at cstring pdf from assignment 1 and modify getCString based on that
	printf("\nUser Login data Input");
	printf("\n----------------------------------------\n");
	printf("Enter user login (10 chars max): ");
	getCString(ptrUserLogin->UserName, 1, 10); //passing value from ptrAccount to getCString and making getCString have a limit of 1 to 10 chars for the usernae
	

	printf("\nEnter the password (must be 8 chars in length): ");
	getCString(ptrUserLogin->passwd, 8, 8); //passing value from ptrAccount to getCString and making getCString have a limit of only 8 chars for the password
	
	
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
			getCString(ptrPerson->Country, 1, 30);
			getStringAllCaps(ptrPerson->Country);
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

		numOption = getIntFromRange(0,1);

		if (numOption == 1) //If user selects option 1
		{
			printf("\nEnter the password (must be 8 chars in length): \n");
			getCString(ptrUserLogin->passwd,1,30);
		}

		if (numOption == 0) //if user selects option 0
		{
			flag = 1; //Ends function
		}
	}
	
}

void getStringAllCaps(char* string) //Functionw will take in Person pointer and convert the string of the country to all caps
{
	int i;
	//For loop that will convert string in country to all caps
	for (i = 0; string[i] != '\0'; i++) //Making i start at zero at run as many times the size of the country string
	{
		if (string[i] >= 'a' && string[i] <= 'z') //if characters in country string is between lowercase a and z
		{
			string[i] = string[i] - 32; //converts to uppercase by subtracting 32 from the ASCII value
		}

	}
}


