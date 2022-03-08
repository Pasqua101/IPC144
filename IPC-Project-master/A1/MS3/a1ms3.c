// #############################################################################################
//  Assignment: 1 
//  Milestone : 3
// #############################################################################################
//  Student Name  : Marco Pasqua
//  Student ID    : 100497213
//  Student Email : mpasqua@myseneca.ca
//  Course Section: NQQ
// #############################################################################################

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "account.h"
#include "accountTicketingUI.h"
#include "commonHelpers.h"

// ------------------------------------------------------------------
// Main entry point to application:

int main(void)
{
    // *** NOTE: No other variables are allowed to be declared ***
    //{ 0 } is being set up to store the data from the pointer, sort of like a bucket. Program decides how much space is needed for the bucket. It reserves a piece of memory when initialized, if it isn't initialized, it could be pointed to any where in the memory, which could corrupt other things already running in memory
    struct Account account = { 0 };                             // *** DO NOT MODIFY THIS LINE *** 

    printf("Assignment 1 Milestone 3 - Tester\n");              // *** DO NOT MODIFY THIS LINE ***
    printf("=============================================\n");  // *** DO NOT MODIFY THIS LINE ***

    // ---------------------------------------------------------
    // Account Data
    // ---------------------------------------------------------
    // Input (new record)

    getAccount(&account);   // Call function to get user input for a new "Account"

    // ---------------------------------------------------------
    // Person Data
    // ---------------------------------------------------------
    // Input (new record)
    getPerson(&account);   // Call function to get user input for a new "Person"

    // ---------------------------------------------------------
    // UserLogin Data
    // ---------------------------------------------------------
    // Input (new record)
    getuserLogin(&account);// Call function to get user input for a new "UserLogin"


    

    // ---------------------------------------------------------
    // Display formatted Account details
    // ---------------------------------------------------------
    displayAccountDetailHeader();         // Call function to display the account detail header
    displayAccountDetailRecord(&account);   // Call function to display an account detail record

    putchar('\n');
    printf("Account, Person, and User Login test completed!\n");  // *** DO NOT MODIFY THIS LINE ***

    return 0;       // *** DO NOT MODIFY THIS LINE ***
}
