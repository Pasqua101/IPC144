#pragma once

//Safe guard (Your identification information commented header goes here)

#ifndef ACCOUNT_TICKETING_UI_H_
#define ACCOUNT_TICKETING_UI_H_

//Function prototypes

void displayAccountDetailHeader(void);

void displayAccountDetailRecord(const struct Account* ptrAccount);

void applicationStartup(struct AccountTicketingData* tickets, int arrSize);

int menuLogin(const struct Account accounts[], int arrSize);

void menuAgent(struct AccountTicektingData* Tickets, const struct Account* agentDetails);

int findAccountIndexByAcctNum(int AcctNum, const struct Account accounts[], int arrSize, int numValue);

void displayAllAccountDetailRecords(const struct Account accounts[], int arrSize);

void pauseExecution(void); //Pause execution until user enters the enter key

//Construct to be made
struct AccountTicketingData
{
	struct Account* accounts; // array of accounts
	const int ACCOUNT_MAX_SIZE; // maximum elements for ticket array

	struct Ticket* tickets; // array of tickets
	const int TICKET_MAX_SIZE; // maximum elements for ticket array
};

//Code for header file goes above #endif

#endif // !ACCOUNT_TICKETING_UI_H_