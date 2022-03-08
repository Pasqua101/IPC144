#pragma once

//Safe guard (Your identification information commented header goes here)

#ifndef ACCOUUNT_H_
#define ACCOUNT_H_


//Constructs to be made

struct Person //Struct for information on the person
{
	char Name[31]; //Holds first name, middle name and last name
	int birthYear; //Meant for birth year
	double Income; //Will hold the household income
	char Country[30]; //Stores the country the user lives in as a string

};

struct UserLogin //Holds login info
{
	char UserName[11]; //Will hold login username
	char passwd[9]; //Stores password info for the login

};

struct Account //Holds account info
{
	int AccntNum; //Holds account num
	char AccntType; //Stores account info, A for Agent, C for customer
	
	struct Person person; //struct to call person
	struct UserLogin user; //struct to call UserLogin
};


//Function prototypes

void getAccount(struct Account* ptrAccount);

void getPerson(struct Person* ptrPerson);

void getuserLogin(struct UserLogin* ptrUserLogin);

void updateAccount(struct Account* ptrAccount);

void updatePerson(struct Person* ptrPerson);

void updateUserLogin(struct UserLogin* ptrUserLogin);

void getStringAllCaps(struct Person* ptrPerson);

void passwordChecker(struct UserLogin* ptrUserLogin); //Checks password with help of ctype.h. returns nothing, only uses pointer to UserLogin struct



// Header file code goes above #endif

#endif // !ACCOUNT_H_