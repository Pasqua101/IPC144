#include <stdio.h>
#include "accountTicketingUI.h"
#include "account.h"




void displayAccountDetailHeader(void)
{
	printf("\nAcct# Acct.Type Full Name       Birth Income      Country    Login      Password\n");
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
    for (i = 1; ptrAccount->user.passwd[i - 1] != '\0'; i++) //Using i-1 since loop will start at [1] in array, needs to start at [0]
    {
        if (i % 2 == 0) //Is the remainder of i / 2 ==0? If yes, then place *
        {
            encryptedpassword[i - 1] = '*';
        }

        else if (i % 2 != 0) //Is the remainder of i / 2 !=0? If yes, then place password character
        {
            encryptedpassword[i - 1] = ptrAccount->user.passwd[i - 1];
        }

    }
    encryptedpassword[8] = '\0'; //Making last space in array null to close it

    printf(" %8s", encryptedpassword);
    printf("\n");

}