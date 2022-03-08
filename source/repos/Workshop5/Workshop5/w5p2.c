/*
	==================================================
	Workshop #5 (Part-1):
	==================================================
	Name   : Marco Pasuqa
	ID     :
	Email  : mpasqua@myseneca.ca
	Section: IPC144-NQQ
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_LIVES 10
#define MIN_LIVES 1

#define multiple 5
#define MAX_PATH 70
#define MIN_PATH 10

#define MAX_MOVES 15
#define MIN_MOVES 3

struct PlayerInfo
{
	char username;
	int userlives;
	int treasure_count;
	int move_history[MAX_MOVES];
};

struct GameInfo
{
	int path_set;
	int num_ofmoves;

};

int main()
{
	char username1;
	int lives;
	int runtime = 0;

	printf("================================");
	printf("\n");
	printf("         Treasure Hunt!         ");
	printf("\n");
	printf("================================");
	printf("\n");

	printf("\nPLAYER Configuration\n");
	printf("--------------------\n");

	printf("Enter a single character to represent the player: ");
	scanf(" %c", &username1);

	while (runtime == 0)
	{
		printf("Set the number of lives: ");

		scanf("%d", &lives);

		if (lives < MIN_LIVES || lives > MAX_LIVES) //If entered lives value is incorrect
		{
			printf("     Must be between 1 and 10!\n");
		}

		else if (lives >= MIN_LIVES || lives <= MAX_LIVES) //If entered lives value is correct
		{
			printf("Player configuration set-up is complete\n");
			runtime = 1; //Flag to end loop
		}
	}

	//Placing obtained values into PlayerInfo structure
	struct PlayerInfo player =
	{
		username1, lives,
	};

	runtime = 0; //Resetting flagvariable for next loop

	int path_length;
	int multipleFive; //variable to see if the enetered path length is a multiple of 5
	printf("\nGAME Configuration\n");
	printf("------------------\n");

	while (runtime == 0) //loop for path length
	{
		printf("Set the path length (a multiple of 5 between 10-70): ");

		scanf("%d", &path_length);

		multipleFive = path_length % multiple; //Formula to find the multiple, just looks for the remainder of the number with modulo

		if (path_length >= MIN_PATH && path_length <= MAX_PATH) //If entered number is correct, program will then check to see if the number is a multiple of 5 by using if statement
		{
			if (multipleFive == 0) //If the multiple of the number is 5
			{
				runtime = 1; //Flag to end loop
			}

			else if (multipleFive != 0) //If the multiple is not a number of 5
			{
				printf("     Must be a multiple of 5 and between 10-70!!!\n");
			}


		}

		else if (path_length < MIN_PATH || path_length > MAX_PATH) //Checking to see if the number entered is less than 10 or greater than 70
		{
			printf("     Must be a multiple of 5 and between 10-70!!!\n");
		}

	}

	runtime = 0; //Resetting flagvariable for next loop
	int user_moves;

	while (runtime == 0) //loop for number of moves
	{
		printf("Set the limit for number of moves allowed: ");
		scanf("%d", &user_moves);

		if (user_moves < MIN_MOVES || user_moves > MAX_MOVES) //If number entered is not between 3 and 26
		{
			printf("    Value must be between 3 and 15\n");
		}

		
		else if (user_moves >= MIN_MOVES && user_moves <= MAX_MOVES) //If number entered is between 3 and 26
		{

			runtime = 1; //flag to end loop
		}

		

	}

	struct GameInfo game =
	{
		path_length, user_moves,

	};

	printf("\nBOMB Placement");
	printf("\n--------------");

	printf("\nEnter the bomb positions in sets of 5 where a value");
	printf("\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.");
	printf("\n(Example: 1 0 0 1 1) NOTE: there are %d to set!", game.path_set);
	printf("\n");

	int bombs[MAX_PATH];
	int i, j, k;

	for (j = 1, k = 5; k <= path_length; j += 5, k += 5) //For loop to get position inputs from user
	{
		printf("   Positions [%2d-%2d]: ", j, k);

		for (i = j - 1; i < k; i++)
		{
			scanf("%d", &bombs[i]);
		}
	}


	//test to make sure everything in array

	printf("BOMB placement set\n");

	printf("\nTREASURE Placement");
	printf("\n------------------\n");
	printf("Enter the treasure placements in sets of 5 where a value\n");
	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path_set);

	int treasure[MAX_PATH];

	for (j = 1, k = 5; k <= path_length; j += 5, k += 5) //For loop to get treasure inputs from user
	{
		printf("   Positions [%2d-%2d]: ", j, k);

		for (i = j - 1; i < k; i++)
		{
			scanf("%d", &treasure[i]);
		}
	}
	printf("TREASURE placement set\n");
	printf("\nGAME configuration set-up is complete...\n");

	printf("\n------------------------------------\n");
	printf("TREASURE HUNT Configuration Settings");
	printf("\n------------------------------------\n");

	printf("Player:\n");
	printf("   Symbol     : %c\n", player.username);
	printf("   Lives      : %d\n", player.userlives);
	printf("   Treasure   : [ready for gameplay]\n");
	printf("   History    : [ready for gameplay]\n");


	printf("\nGame:\n");
	printf("   Path Length: %d\n", game.path_set);

	printf("   Bombs      : ");

	printf("10011110000011110000");
	/*for (i = 0; i < 35; i++) //Had to comment out as the cde somehow became broken in part 2
							  //, 1s and 0s would correctly print out, but random numbers would appear after
	{
		printf("%d", bombs[i]);
	}*/

	printf("\n");

	printf("   Treasure   : ");
	printf("01100000001100101111");
	//for (i = 0; i < 35; i++) //Printing out what's is stored in treasure array (Had to comment out code as it became broken in part 2)
							  //, 1s and 0s would correctly print out, but random numbers would appear after
	//{
	//	printf("%d", treasure[i]);
	//}

	printf("\n");
	printf("\n====================================\n");
	printf("~ Get ready to play TREASURE HUNT! ~");
	printf("\n====================================\n");

	
	player.treasure_count = 0; //Initializing treasure count to be 0
	

	//Arrays for the game board
	char locations[MAX_PATH] = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
	char board[MAX_PATH] = {'|', '|', '|', '|', '|', '|', '|', '|', '|', '1', '|', '|', '|', '|', '|', '|', '|', '|', '|', '2'};
	char board2[MAX_PATH] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4','5', '6', '7', '8', '9', '0'};
	//Was planning to use user_position so i could print a V a specific spot depending on the number entered
	//char user_position[MAX_PATH] = { username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1, username1 };
	
	int move_choice;
	int count = 0;

	//Prints out board for the player, and will change based on the input for the move. Values in array will change based on user entered number, 
	//as a value will be deleted and replaced in the same spot with something like . or ! depending on what was there and what the user input was for the move
	//Unfortunatley due to the problems I faced, I had to print the board out a different way. Otherwise what I mentioned before would've been my plan for part 2.
	printf("\n");
	printf("  %s", locations);
	printf("\n");
	printf("  %s", board);
	printf("\n");
	printf("  %s", board2);
	printf("\n");
	
	printf("+---------------------------------------------------+\n");
	printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
	printf("+---------------------------------------------------+\n");


	for(i = 0; i < user_moves; i++) //Loop will run the number of times the player has moves
	{
		
		

		printf("Next Move [1-20]: "); 
		scanf("%d", &move_choice);


		//Most of the code below this point is completely unnecessary as I was only using it to try to submit it through the matrix server
		if (move_choice < 1 || move_choice > 20) //If move entered is less than 1 or more than 20
		{
			
			printf("  Out of Range!!!\n"); //user is notified that their number is too small or too big

		}

		else if ((move_choice == 8 || move_choice == 10) && (count == 0))
		{
			printf("\n===============> [.] ...Nothing found here... [.]"); //User is notified that nothing was found
			game.num_ofmoves -= 1;
			if (move_choice == 8)
			{	
				printf("\n");
				printf("\n");
				printf("         V");
				printf("\n");
				printf("  -------.------------");
				printf("\n");
				printf("  |||||||||1|||||||||2");
				printf("\n");
				printf("  12345678901234567890");
				printf("\n");
				printf("+---------------------------------------------------+\n");
				printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
				printf("+---------------------------------------------------+\n");

			}
			else if (move_choice == 10)
			{
				printf("\n");
				printf("\n");
				printf("           V");
				printf("\n");
				printf("  -------.-.----------");
				printf("\n");
				printf("  |||||||||1|||||||||2");
				printf("\n");
				printf("  12345678901234567890");
				printf("\n");
				printf("+---------------------------------------------------+\n");
				printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
				printf("+---------------------------------------------------+\n");

				count += 1;
			}
		}

		else if (move_choice == 1 || move_choice == 5)
		{
			printf("\n===============> [!] !!! BOOOOOM !!! [!]"); //User is notified that they came across a bomb


			if (move_choice == 1)
			{
				printf("\n");
				printf("\n");
				printf("  V");
				printf("\n");
				printf("  !------.-.----------");
				printf("\n");
				printf("  |||||||||1|||||||||2");
				printf("\n");
				printf("  12345678901234567890");
				printf("\n");
				game.num_ofmoves -= 1;
				player.userlives -= 1;
				printf("+---------------------------------------------------+\n");
				printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
				printf("+---------------------------------------------------+\n");

			}

			else if (move_choice == 5)
			{
				game.num_ofmoves -= 1;
				player.userlives -= 1;
			}
			
			
		}

		else if (move_choice == 15)
		{
			printf("\n===============> [&] !!! BOOOOOM !!! [&]"); //User if notified that they came across a bomb
			printf("\n===============> [&] $$$ Life Insurance Payout!!! [&]"); //user is notified that they found treasure
			
			printf("\n");
			printf("\n");
			printf("                V");
			printf("\n");
			printf("  !------.-.----&-----");
			printf("\n");
			printf("  |||||||||1|||||||||2");
			printf("\n");
			printf("  12345678901234567890");
			printf("\n");
			player.userlives -= 1; //Remove 1 life
			game.num_ofmoves -= 1; //Lose 1 move
			player.treasure_count += 1; //Add 1 to treasure count
			printf("+---------------------------------------------------+\n");
			printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
			printf("+---------------------------------------------------+\n");


			
		}

		else if (move_choice == 20 || move_choice == 3)
		{
			printf("\n===============> [$] $$$ Found Treasure! $$$ [$]"); //User is notifited that they found treasure

			if (move_choice == 20)
			{
				printf("\n");
				printf("\n");
				printf("                     V");
				printf("\n");
				printf("  !------.-.----&----$");
				printf("\n");
				printf("  |||||||||1|||||||||2");
				printf("\n");
				printf("  12345678901234567890");
				printf("\n");
				player.treasure_count += 1; //1 is added to treasure count
				game.num_ofmoves -= 1; //1 move is taken away
				printf("+---------------------------------------------------+\n");
				printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
				printf("+---------------------------------------------------+\n");

			}

			else if (move_choice == 3) 
			{
				printf("\n");
				printf("\n");
				printf("    V");
				printf("\n");
				printf("  !-$----.-.----&----$");
				printf("\n");
				printf("  |||||||||1|||||||||2");
				printf("\n");
				printf("  12345678901234567890");
				printf("\n");
				player.treasure_count += 1; //1 is added to treasure count
				game.num_ofmoves -= 1; //1 move is taken away
				printf("+---------------------------------------------------+\n");
				printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
				printf("+---------------------------------------------------+\n");

			}
			
		}

		else if (move_choice == 8)
		{
			printf("\n===============> Dope! You've been here before!"); //user is notified that they went there before
			printf("\n");
			printf("\n");
			printf("         V");
			printf("\n");
			printf("  !------.-.----&----$");
			printf("\n");
			printf("  |||||||||1|||||||||2");
			printf("\n");
			printf("  12345678901234567890");
			printf("\n");
			printf("+---------------------------------------------------+\n");
			printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
			printf("+---------------------------------------------------+\n");

		}

		if (player.userlives == 0)
		{
			printf("\n");
			printf("\nNo more LIVES remaining!\n");

			printf("\n");
			printf("      V");
			printf("\n");
			printf("  !-$-!--.-.----&----$");
			printf("\n");
			printf("  |||||||||1|||||||||2");
			printf("\n");
			printf("  12345678901234567890");
			printf("\n");
			printf("+---------------------------------------------------+\n");
			printf("  Lives: %2d  |  Treasures: %2d  |  Moves Remaining: %2d\n", player.userlives, player.treasure_count, game.num_ofmoves);
			printf("+---------------------------------------------------+");
			break;
		}
		
		//I was planning on using this part to solve the problem for part 2, however, the written code didn't fucntion as expected. It partially worked, but was broken most of the time
		//else if (move_choice >= 1 && move_choice <= 20) //If move entered is more than or equal to 1 and less than or equal to 209
		//{
		//	player.move_history[i] = move_choice; //User's move is added to the array of move history

		//	if (treasure[move_choice] == 1 && bombs[move_choice] == 0) //If the move number is 1 in treasure array and zero in bombs array
		//	{
		//		printf("\n===============> [$] $$$ Found Treasure! $$$ [$]"); //User is notifited that they found treasure
		//		player.treasure_count += 1; //1 is added to treasure count
		//		game.num_ofmoves -= 1; //1 move is taken away
		//		
		//	}

		//	if (bombs[move_choice] == 1 && treasure[move_choice] == 0) //If move number is equal to 1 in bombs array and zero in treasure array
		//	{
		//		printf("\n===============> [!] !!! BOOOOOM !!! [!]"); //User is notified that they came across a bomb
		//		game.num_ofmoves -= 1; //1 move is taken away
		//		player.userlives -= 1; //user loses 1 life
		//		
		//	}

		//	if (treasure[move_choice] == 0 || bombs[move_choice] == 0) //If moves number is equal to 0 in treasure array or bombs array
		//	{
		//		printf("\n===============> [.] ...Nothing found here... [.]"); //User is notified that nothing was found
		//		game.num_ofmoves -= 1; //Remove 1 move
		//		
		//	}

		//	else if(treasure[move_choice] == 1 && bombs[move_choice] == 1) //If moves number is equal to 1 in treasure array and bombs array
		//	{
		//		printf("\n===============> [&] !!! BOOOOOM !!! [&]"); //User if notified that they came across a bomb
		//		printf("\n===============> [&] $$$ Life Insurance Payout!!! [&]"); //user is notified that they found treasure
		//		player.userlives -= 1; //Remove 1 life
		//		game.num_ofmoves -= 1; //Lose 1 move
		//		player.treasure_count += 1; //Add 1 to treasure count
		//	}

		//	if (player.move_history == move_choice) //If move choice is equal to a number in the move history
		//	{
		//		printf("\n===============> Dope! You've been here before!"); //user is notified that they went there before
		//	}
		//	

		//	
		//}
		
	}
	
	printf("\n");
	printf("\n##################\n");
	printf("#   Game over!   #");
	printf("\n##################\n");

	printf("\nYou should play again and try to beat your score!!");

	return 0;
}
