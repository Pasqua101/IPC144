#include "accountTicketingUI.h"
#include "account.h"
#include "commonHelpers.h"

void displayAccountDetailHeader(void)
{
	printf("Acct# Acct.Type Full Name       Birth Income      Country    Login      Password\n");
	printf("----- --------- --------------- ----- ----------- ---------- ---------- --------\n");
}

void displayAccountDetailRecord(const struct Account* ptrAccount)
{

    printf("%05d", ptrAccount->AccntNum);
    
    if (ptrAccount->AccntType == 'A') //Is AccentType == 'A', if yes print out Agent in char accountType array
    {
        char accountType[10] = "AGENT";
        printf(" %-9s", accountType);
    }

    else if (ptrAccount->AccntType == 'C') //Is AccentType == 'C', if yes print out CUSTOMER in char accountType array
    {
        char accountType[10] = "CUSTOMER";
        printf(" %-9s", accountType);
    }

    printf(" %-15s", ptrAccount->person.Name); //Leading space is used to space out columns, can use - to visualize it
    printf(" %5d", ptrAccount->person.birthYear);

    printf(" %11.2lf", ptrAccount->person.Income);
    printf(" %-10s", ptrAccount->person.Country);

    printf(" %-10s", ptrAccount->user.UserName);
    
    //Create an array, called encryptedpassword
    char encryptedpassword[9];

    //create a for loop that fills every other character in encryptedpassword with * and checks for even or odd. If number remaind is even, place a *. If odd, place password character
    int i;
    if (ptrAccount->AccntType == 'A')
    {
        for (i = 1; ptrAccount->user.passwd[i - 1] != '\0'; i++) //Using i-1 since loop will start at [1] in array, needs to start at [0]
        {

            if (i % 2 == 0) //Is the remainder of i / 2 == 0? If yes, then place *
            {
                encryptedpassword[i - 1] = '*';
            }

            else if (i % 2 != 0) //Is the remainder of i / 2 != 0? If yes, then place password character
            {
                encryptedpassword[i - 1] = ptrAccount->user.passwd[i - 1];
            }

        }
        encryptedpassword[8] = '\0'; //Making last space in array null to close it
    }
    else if (ptrAccount->AccntType == 'C') //If the account type is a customer
    {
        encryptedpassword[0] = '\0'; //Sets first value in password to null because customers have no password
    }

    
    printf(" %8s", encryptedpassword);
    
    printf("\n");

}

void applicationStartup(struct Account accounts[], int arrSize)
{
    int flag = 0;
    int arrIndex = 0;

    while (flag == 0)
    {
        arrIndex = menuLogin(accounts, arrSize);
        
        
        //Not ending, look at the return value in menuLogin function
        if (arrIndex == -1) //If value returned from arrIndex is -1, the loop will end. Ending the program
        {
            flag = 1; 
        }

        if (accounts[arrIndex].AccntType == 'A') //Is account type of the current account an Agent (A)
        {
            menuAgent(accounts, arrSize, &accounts[arrIndex]); //if yes, call menuAgent function
        }

        else if (accounts[arrIndex].AccntType == 'C') //Is account tpe of the current account a Customer (C)
        {
            printf("\nError: login failed!"); //If yes print out error
            pauseExecution();
        }

    }


}

int menuLogin(const struct Account accounts[], int arrSize)
{
    int optionNum;
    char optionChar;
    int flag = 0;
    int accountNum = 0;
    int arrIndex = -1;
    int i = 0;

    

    while (flag == 0) 
    {

        printf("\n========================================\n");
        printf("Account Ticketing System - Login\n");
        printf("========================================\n");
        printf("1) Login to the system\n");
        printf("0) Exit application\n");
        printf("----------------------------------------\n");

        printf("\nSelection: ");
        
        optionNum = getIntFromRange(0,1);

        if (optionNum == 1) //If 1 is entered, prompt user to get accountNum
        {
            //Call findAccountIndexByAcctnum function
            arrIndex = findAccountIndexByAcctNum(accountNum, accounts, arrSize, 1);
            flag = 1;


        }

        if (optionNum == 0) //if 0 is entered, ask user to confirm that they want to exit
        {
            printf("\nAre you sure you want to exit? ([Y]es|[N]o): ");
            optionChar = getCharOption("yYnN"); //Pass optionChar to getCharOption

            if (optionChar == 'Y' || optionChar == 'y') //If optionChar is equal to Y or y, print end message and end program
            {
                printf("\n========================================\n");
                printf("Account Ticketing System - Terminated\n");
                printf("========================================\n");
                arrIndex = -1;
                flag = 1;
                
                
            }

            else if (optionChar == 'N' || optionChar == 'n') //If optionChar is equalt to N or n, does nothing, just returns to login message
            {

            }

        }
    }
   
    return arrIndex;
    
}

void menuAgent(struct Account accounts[], int arrSize, const struct Account* agentDetails)
{
    int optionNum;
    int flag = 0;
    int arrIndex = 0;
    char removalChar;
    int localAccountNum = 0;

    int i = 0;
    while (flag == 0)
    {

        printf("AGENT: %s (%d)", agentDetails->person.Name, agentDetails->AccntNum);
        printf("\n========================================\n");
        printf("Account Ticketing System - Agent Menu\n");
        printf("========================================\n");
        printf("1) Add a new account\n");
        printf("2) Modify an existing account\n");
        printf("3) Remove an account\n");
        printf("4) List accounts: detailed view\n"); 
        printf("----------------------------------------\n");
        printf("0) Logout\n");
    
        printf("\nSelection: ");

        optionNum = getIntFromRange(0, 4);

        if (optionNum == 1) //If user selects option 1
        {
            //Find available index in accounts array where a new account can be added
           
            //For loop runs 5 times
            for (i = 0; i < arrSize; i++)
            {
                
                if (accounts[i].AccntNum == 0)
                {
                    printf("Empty account"); //Printf used for debugging
                    //Modify getAccount function to randomly generate account num, should generate the number before going into the account
                    getAccount(&accounts[i]); //Calling function to add a new account where i variable found empty account
                    break;

                }

                if (i == arrSize && accounts[i].AccntNum != 0)
                {
                    //If there are no remaining elements, print out errory message 
                    printf("ERROR: Account listing is FULL, call ITS Support!");
                }
            }
           
        }
        
        else if (optionNum == 2) //If user selects option 2
        {
            
            // If no account num found, print out error message
            arrIndex = findAccountIndexByAcctNum(localAccountNum, accounts, arrSize, 1);
            
            //If account found call updateAccount function at some point
            if (arrIndex != 0) //If zero is not returned from arrIndex in findaccountindex function, then call update account function
            {
                updateAccount(&accounts[arrIndex]); //Calling updateAccount function, with the arrInex of the account found
            }
            

        }

        else if (optionNum == 3) //If user selects option 3
        {
            // Prompt user for account num
            printf("Enter account#: ");
            localAccountNum = getPositiveInteger();

            //If account num entered is the same as logged in account, deny the removal and print out error message
            if (localAccountNum == agentDetails->AccntNum)
            {
                printf("ERROR: You cannot remove your own account\n"); //Check sample output for proper message
            }

            //If account is found and is different from logged in account
            else if (localAccountNum != agentDetails->AccntNum)
            {
                //Checks to find the index of the account num entered and then pass that to the display account detail function to show the info
                arrIndex = findAccountIndexByAcctNum(localAccountNum, accounts, arrSize, 0); 
                displayAllAccountDetailRecords(&accounts[arrIndex], 1); //Setting it to an size of 1 so it only prints one value 
                

                //Prompt for user's permission to remove account, set account number at the index to 0 if account is removed
                printf("\nAre you sure you want to remove this record? ([Y]es|[N]o): \n");
                //Call on getCharOption function to make sure the entered character is supported
                removalChar = getCharOption("YN");

                if (removalChar == 'Y') //If user enters Y, set accountNum to 0
                {
                    //Create a loop to set account num of entered number to 0
                    arrIndex = findAccountIndexByAcctNum(localAccountNum, accounts, arrSize, 0); 

                    printf("*** Account Removed! ***");

                    accounts[arrIndex].AccntNum = 0;

                    pauseExecution();


                }

                else if (removalChar == 'N') //If user enters N, do nothing
                {

                }
            }
            
            
        }

        else if (optionNum == 4) //If user selects option 4
        {
            //Must call displayAllAccountDetailRecords at some point
            displayAllAccountDetailRecords(accounts, arrSize);

            pauseExecution();

        }

        else if (optionNum == 0) //If user selects option 0, exit the function
        {
            flag = 1; 
        }
    }


}

int findAccountIndexByAcctNum(int AcctNum, const struct Account accounts[], int arrSize, int numValue)
{

    int i, arrIndex = 0; //used to look through array when using for loop to compare account number to the index of the account number in the account array. arrIndex will be returned if the number entered is found in the array
    int localAccountNum = 0;
   

    if (numValue == 0)
    {
        localAccountNum = AcctNum;
    }

    else if (numValue == 1)
    {
        printf("\nEnter your account#: ");
        localAccountNum = getPositiveInteger();
        

    }

    arrIndex = 0; //Setting arrIndex to 0 to default it to a number, if it is still 0 when it an accountNum wasn't found in the for loop, it will return 0
    
    for (i = 0; i < arrSize; i++)
    {
        if (localAccountNum == accounts[i].AccntNum)
        {
            arrIndex = i;
            break;
        }
        
    }

    return arrIndex;

}

void displayAllAccountDetailRecords(const struct Account accounts[], int arrsize)
{
    
    int i;

    displayAccountDetailHeader();
    for (i = 0; i < arrsize; i++)
    {
        if (accounts[i].AccntNum != 0) //Prints if the account number is not a zero
        {
            displayAccountDetailRecord(&accounts[i]);
        }
        else if (accounts[i].AccntNum == 0)
        {
            //Does not print anything
        }
        
    }
    
    
}

//Pause execution until user enter the enter key
void pauseExecution(void)
{
    printf("\n\n<< ENTER key to Continue... >>");
    clearStandardInputBuffer();
    putchar('\n');
}
