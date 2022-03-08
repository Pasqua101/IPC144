#pragma once
//Safe guard (Your identification information commented header goes here)

#ifndef TICKETS_H_
#define TICKETS_H_

//Constructs to be made

struct Message
{
	struct Account account; //Calling account struct to use the account type and name of a user
	char MessageDetails[151];
	
};

struct Ticket
{
	int TicketNum; //Number for a ticket
	int CustomerAccntNum; //Customer number related to ticket num
	int TicektStatus; //Indicator if a ticket is still open or not, uses 0 to show closed, 1 to show still active
	char Subject[31]; //Subject Line string
	int MessageCount; //Counts num of messages associated with a ticket
	char Messages[20][101]; //(2D Array) String stores 20 messages (rows), and 100 chars (columns)

};

// Header file code goes above #endif

#endif // !ACCOUNT_H_