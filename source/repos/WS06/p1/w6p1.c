/*
	==================================================
	Workshop #6 (Part-1):
	==================================================
	Name   : Marco Pasqua
	ID     : 100497213
	Email  : mpasqua@myseneca.ca
	Section: NQQ
*/


#include <stdio.h>
#include "w6p1.h"

// System Libraries


// User Libraries


// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

getIntPositive(int *int_num)
{
	if (*int_num > 0)
	{
		printf("The number entered is positive");
	}

	else if(*int_num < 0)
	{
		printf("Please enter a positive number");
	}
}
// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

getDoubluePositive(double *doub_num)
{
	//double user_doub;
	if (*doub_num > 0)
	{
		printf("The number entered is positive");
	}

	else if (*doub_num < 0)
	{
		printf("Please enter a positive number");
	}
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(void) 
{
	printf("\n===========================");
	printf("\nStarting Main Program Logic");
	printf("\n===========================\n");
	printf("\nCat Food Cost Analysis");
	printf("\n======================\n");
	printf("\nEnter the details for %d fry food bags of product data for analysis.", PROD_ANALYZE);
	printf("\nA 'serving' is %dg", SUGGESTED_GRAMS);

}

// 4. Get user input for the details of cat food product
getCatFoodInfo()
{
	int i;
	for (i = 0; i < PROD_ANALYZE; i++)
	{
		int SKU, Calories;
		double Price, Weight;
		printf("\n");
		//see if variables from this function have to use point from construct and get positive function, to verify numbers enetered are positive 
		printf("\nCat Food Product #%d", i);
		printf("\n----------------");
		printf("\nSKU           : ");
		scanf("%d", &SKU);
		if (SKU < 0) 
		{
			printf("\nERROR: Enter a positive value: ");
			scanf("%d", &SKU);
		}
		printf("\nPRICE          : $");
		scanf("%lf", &Price);
		if (Price < 0)
		{
			printf("\nERROR: Enter a positive value: ");
			scanf("%lf", &Price);
		}
		printf("\nWEIGHT (LBS)  : ");
		scanf("%lf", &Weight);
		if (Weight < 0)
		{
			printf("\nERROR: Enter a positive value: ");
			scanf("%lf", &Weight);
		}
		printf("\nCALORIES/SERV.: ");
		scanf("%d", Calories);
		if (Calories < 0)
		{
			printf("\nERROR: Enter a positive value: ");
			scanf("%d", &Calories);
		}


	}
	
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
struct CatFoodInfo catfood;
void displayCatFoodData()
{
	int j;
	for (j = 0; j < PROD_ANALYZE; j++)
	{
		printf("%07d %10.2lf %10.1lf %8d\n", catfood.SKU[j], catfood.Price[j], catfood.Weight[j], catfood.Calories[j]);
	}

}

// 7. Logic entry point

void start()
{
	openingMessage();
	getCatFoodInfo();
	displayCatFoodHeader();
	displayCatFoodData();
}
