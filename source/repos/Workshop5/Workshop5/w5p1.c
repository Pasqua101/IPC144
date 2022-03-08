///*
//	==================================================
//	Workshop #5 (Part-1):
//	==================================================
//	Name   : Marco Pasuqa
//	ID     : 
//	Email  : mpasqua@myseneca.ca
//	Section: IPC144-NQQ
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_LIVES 10
//#define MIN_LIVES 1
//
//#define multiple 5
//#define MAX_PATH 70
//#define MIN_PATH 10
//
//#define MAX_MOVES 26
//#define MIN_MOVES 3
//
//struct PlayerInfo
//{
//	char username;
//	int userlives;
//};
//
//struct GameInfo
//{
//	int path_set;
//	int num_ofmoves;
//	
//};
//
//int main()
//{
//	char username1;
//	int lives;
//	int runtime = 0;
//
//	printf("================================");
//	printf("\n");
//	printf("         Treasure Hunt!         ");
//	printf("\n");
//	printf("================================");
//	printf("\n");
//
//	printf("\nPLAYER Configuration\n");
//	printf("--------------------\n");
//
//	printf("Enter a single character to represent the player: ");
//	scanf(" %c", &username1);
//
//	while (runtime == 0)
//	{
//		printf("Set the number of lives: ");
//
//		scanf("%d", &lives);
//
//		if (lives < MIN_LIVES || lives > MAX_LIVES) //If entered lives value is incorrect
//		{
//			printf("     Must be between 1 and 10!\n");
//		}
//
//		else if (lives >= MIN_LIVES || lives <= MAX_LIVES) //If entered lives value is correct
//		{
//			printf("Player configuration set-up is complete\n");
//			runtime = 1; //Flag to end loop
//		}
//	}
//	
//	//Placing obtained values into PlayerInfo structure
//	struct PlayerInfo player =
//	{
//		username1, lives,
//	};
//	
//	runtime = 0; //Resetting flagvariable for next loop
//
//	int path_length;
//	int multipleFive; //variable to see if the enetered path length is a multiple of 5
//	printf("\nGAME Configuration\n");
//	printf("------------------\n");
//
//	while(runtime == 0) //loop for path length
//	{ 
//		printf("Set the path length (a multiple of 5 between 10-70): ");
//		
//		scanf("%d", &path_length);
//
//		multipleFive = path_length % multiple; //Formula to find the multiple, just looks for the remainder of the number with modulo
//
//		if (path_length >= MIN_PATH && path_length <= MAX_PATH) //If entered number is correct, program will then check to see if the number is a multiple of 5 by using if statement
//		{
//			if (multipleFive == 0) //If the multiple of the number is 5
//			{
//				runtime = 1; //Flag to end loop
//			}
//
//			else if (multipleFive != 0) //If the multiple is not a number of 5
//			{
//				printf("     Must be a multiple of 5 and between 10-70!!!\n");
//			}
//
//			
//		}
//
//		else if (path_length < MIN_PATH || path_length > MAX_PATH) //Checking to see if the number entered is less than 10 or greater than 70
//		{
//			printf("     Must be a multiple of 5 and between 10-70!!!\n");
//		}
//
//	}
//
//	runtime = 0; //Resetting flagvariable for next loop
//	int user_moves;
//
//	while (runtime == 0) //loop for number of moves
//	{
//		printf("Set the limit for number of moves allowed: ");
//		scanf("%d", &user_moves);
//
//		if (user_moves >= MIN_MOVES && user_moves <= MAX_MOVES) //If number entered is between 3 and 26
//		{
//			
//			runtime = 1; //flag to end loop
//		}
//
//		else if (user_moves < MIN_MOVES || user_moves > MAX_MOVES) //If number entered is not between 3 and 26
//		{
//			printf("    Value must be between 3 and 26\n");
//		}
//	
//	}
//	
//	struct GameInfo game =
//	{
//		path_length, user_moves,
//
//	};
//
//	printf("\nBOMB Placement");
//	printf("\n--------------");
//
//	printf("\nEnter the bomb positions in sets of 5 where a value");
//	printf("\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.");
//	printf("\n(Example: 1 0 0 1 1) NOTE: there are %d to set!", game.path_set);
//	printf("\n");
//
//	int bombs[MAX_PATH];
//	int i, j, k;
//
//	for (j = 1, k = 5; k <= path_length; j += 5, k += 5) //For loop to get position inputs from user
//	{
//		printf("   Positions [%2d-%2d]: ", j, k);
//
//		for (i = j - 1; i < k; i++)
//		{
//			scanf("%d", &bombs[i]);
//		}
//	}
//		
//	
//	//test to make sure everything in array
//	
//	printf("BOMB placement set\n");
//
//	printf("\nTREASURE Placement");
//	printf("\n------------------\n");
//	printf("Enter the treasure placements in sets of 5 where a value\n");
//	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
//	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path_set);
//	
//	int treasure[MAX_PATH];
//
//	for (j = 1, k = 5; k <= path_length; j += 5, k += 5) //For loop to get treasure inputs from user
//	{
//		printf("   Positions [%2d-%2d]: ", j, k);
//
//		for (i = j - 1; i < k; i++)
//		{
//			scanf("%d", &treasure[i]);
//		}
//	}
//	printf("TREASURE placement set\n");
//	printf("\nGAME configuration set-up is complete...\n");
//	
//	printf("\n------------------------------------\n");
//	printf("TREASURE HUNT Configuration Settings");
//	printf("\n------------------------------------\n");
//
//	printf("Player:\n");
//	printf("   Symbol     : %c\n", player.username);
//	printf("   Lives      : %d\n", player.userlives);
//	printf("   Treasure   : [ready for gameplay]\n");
//	printf("   History    : [ready for gameplay]\n");
//	
//
//	printf("\nGame:\n");
//	printf("   Path Length: %d\n", game.path_set);
//
//	printf("   Bombs      : ");
//	for (i = 0; i < 35; i++)
//	{
//		printf("%d", bombs[i]);
//	}
//
//	printf("\n");
//
//	printf("   Treasure   : ");
//	for (i = 0; i < 35; i++) //Printing out what's is stored in treasure array
//	{
//		printf("%d", treasure[i]);
//	}
//
//	printf("\n");
//	printf("\n====================================\n");
//	printf("~ Get ready to play TREASURE HUNT! ~");
//	printf("\n====================================");
//
//	return 0;
//}
