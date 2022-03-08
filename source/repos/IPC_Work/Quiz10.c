//#include <stdio.h>
////Walkthrough quiz,
//#define INITIAL_HEALTH 100
//#define NAME_LENGTH 10
//
//struct Hero
//{
//	char name[NAME_LENGTH + 1];
//	int health;
//	int strength;
//	int shield;
//};
//
//struct Hero attack(struct Hero* h1, struct Hero* h2)
//{
//	struct Hero result;
//
//	while (h1->health > 0 && h2->health > 0)
//	{
//	h1->health -= h2->strength - h1->shield;
//	h2->health -= h1->strength - h2->shield;
//	}
//
//	if (h1->health < h2->health)
//	{
//	result = *h1;
//	}
//	else
//	{
//	result = *h2;
//	}
//
//	return result;
//}
//
//int main(void)
//{
//	struct Hero hero1 = { {'N', 'i', 'n', 'j', 'a', '\0'} , INITIAL_HEALTH, 150, 20 };
//	struct Hero hero2 = { "Enigma", INITIAL_HEALTH, 75, 50 };
//	
//	struct Hero winner = attack(&hero1, &hero2);
//	
//	puts("Game Over");
//	printf("The winner is %s", winner.name);
//	
//	return 0;
//}
//my answer
//1. Line 38: Calls the hero sturcture as hero1, and begins to assign values to the variables in the sturcture.Assigns the word "Ninja" to the string array name, assigns a value of 100 to heath variable, with the use of the macro INITIAL_HEALTH.Assigns a value of 150 to strength variable, and it assignes a value of 20 to shield variable.
//
//
//2. Line 39 : Calls the hero struct again but as hero2, and begins to assign values to the variables in the structure.Assigns the word "Enigma" to the string array, assigns a value of 100 to the health variable, with the use of the INITIAL_HEALTH macro.Assigns a value of 75 to the strength variable, and it assigns a value of 50 to the shield variable.
//
//
//3. Line : 41 : Calls the hero again but as winner, and calls the function attackand assigns the address of hero1and hero2 as arguments for the function to use.
//
//
//4. Line 15 : Since the attack function was called, the code will use the function.
//
//
//5. Line 16 : Calls the hero struct as result, so it can be used later in the function.
//
//
//6. Line 18 : The code enters a while loop by calling on the hero pointers h1(hero1) and h2(hero2), to see if their health is greater than 0, which it is.
//
//
//7. Line 20 : h2's strength is subtracted by h1's shield, by using the h1and h2 pointers, which is then subtracted by h1's health. In order to show how much health h1 has after their battle with h2.
//
//
//8. Line 21 : h1's strenth is subtracted by h1's shield, by using the h1and h2 pointers, which is then subtracted by h2's health. In order to show much health h2 has after that battle with h1.
//
//
//9. Line 24 : An if statement is used to see if h1's health is less than h2's health, which it isn't.
//
//
//10. Line 28 : Since h1's health is not less than h2's health, the code goes inside the else staement.
//
//
//11: Line 30 : The code adds h2's information to result.
//
//
//12. Line 33 : The attack function returns result, which has h2's information and gives it to winner, and returns control back to the main function.
//
//
//13. Line 43 : The code prints out "Game Over".
//
//
//14. Line 44 : The code prints out  "The winner is Enigma", since winner has the name of hero2, who was the winner of the game.
//
//
//15. Line 46 : The code returns 0 to return control to the operating system.