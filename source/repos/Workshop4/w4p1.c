///*
//	==================================================
//	Workshop #4 (Part-1):
//	==================================================
//	Name   : Marco Pasqua
//	ID     :
//	Email  : mpasqua@myseneca.ca
//	Section: IPC144-NQQ
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define WISHITEM_LIMIT 10
//
//int main()
//{
//	const double minIncome = 500.00, maxIncome = 400000.00;
//
//	double userMonthly_income;
//	int runtime = 0; //Variable to have the while loop run
//	int userwish;
//	printf("+--------------------------+\n");
//	printf("+   Wish List Forecaster   |\n");
//	printf("+--------------------------+\n");
//
//	while (runtime == 0)
//	{
//		printf("\nEnter your monthly NET income: $");
//		scanf("%lf", &userMonthly_income);
//
//		if (userMonthly_income < minIncome)
//		{
//			printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
//		}
//
//		else if (userMonthly_income > maxIncome)
//		{
//			printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
//		}
//
//		else if (userMonthly_income >= minIncome || userMonthly_income <= maxIncome)
//		{
//			runtime = 1;
//		}
//	}
//	runtime = 0; //Reseting the runtime variable for the next loop
//	while (runtime == 0)
//	{
//		printf("\nHow many wish list items do you want to forecast?: ");
//		scanf("%d", &userwish);
//
//		if (userwish < 1 || userwish > 10)
//		{
//			printf("ERROR: List is restricted to between 1 and 10 items.\n");
//		}
//
//		else
//		{
//			runtime = 1;
//		}
//
//	}
//
//	double wishlist_cost[WISHITEM_LIMIT]; //Making the array size the limit of the wish list
//	int wishlist_Importance[WISHITEM_LIMIT]; //Making the array size the limit of the wish list
//	double itemcost;
//	int itemImportance;
//	runtime = 0;
//	int itemnum = 1;
//	char finace[WISHITEM_LIMIT];//Making the array size the limit of the wish list
//	char finace_reponse;
//	double total = 0;
//	
//	int i;
//	printf("\n");
//	for (i = 0; i < userwish; i++) //For loop to get values for the arrays
//	{
//		printf("Item-%d Details:\n", itemnum);
//		do //Do while for the cost of an item on the wishlist
//		{
//			printf("   Item cost: $");
//			scanf(" %lf", &itemcost);
//
//			if (itemcost < 100.00) //If the cost entered is less than 100
//			{
//				printf("     ERROR: Cost must be at least $100.00");
//			}
//		} while (itemcost < 100.00);
//		wishlist_cost[i] = itemcost; //Adding the value to the array
//		total = total + itemcost; //Finding the total
//
//		do //Do while for item importance
//		{
//			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
//			scanf("%d", &itemImportance);
//
//			if (itemImportance < 1 || itemImportance > 3) //If the rating enetered is leas than 1 or more than 3
//			{
//				printf("      ERROR: Value must be between 1 and 3\n");
//			}
//		} while (itemImportance < 1 || itemImportance > 3);
//		wishlist_Importance[i] = itemImportance; //Adding value to the array for itemImportance
//
//		do //Do while for finacing option
//		{
//			printf("    Does this item have finacing options? [y/n]: ");
//			scanf(" %c", &finace_reponse);
//
//			if (finace_reponse != 'y' && finace_reponse != 'n') //If char enetered is not y or n
//			{
//				printf("      ERROR: Must be lowecase 'y' or 'n'\n");
//			}
//		}while(finace_reponse != 'y' && finace_reponse != 'n');
//		finace[i] = finace_reponse; //Adding char of finace to finace_response
//		printf("\n");
//		itemnum++; //itemnum changes the item that is shown once all the steps are completed for one item
//	}
//
//	printf("Item Priority Finaced         Cost\n");
//	printf("---- -------- -------- -----------\n");
//	int j;
//	for (j = 0; j < userwish; j++) //change 3 to user wish
//	{
//		
//		printf("%3d  %5d    %5c    %11.2lf\n", j + 1, wishlist_Importance[j], finace[j], wishlist_cost[j]); 
//		
//	}
//	printf("---- -------- -------- -----------\n");
//	
//	printf("                      $%11.2lf\n\n", total);
//	printf("Best of luck in your future endeavours!");
//	return 0;
//
//	
//}