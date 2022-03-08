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


#define PROD_ANALYZE 3 //Max num of products to analyze
#define SUGGESTED_GRAMS 64

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
	int SKU[PROD_ANALYZE];
	double Price[PROD_ANALYZE];
	int Calories[PROD_ANALYZE]; 
	double Weight[PROD_ANALYZE];
}



// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

getIntPositive(int *int_num);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

getDoublePositive(double *doub_num);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(void);

// 4. Get user input for the details of cat food product
getCatFoodInfo(const int *SKU, const double *Price, const int *Calories, const double *Weight);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data

struct CatFoodInfo catfood;
void displayCatFoodData(int i);

 //7. Logic entry point
void start();

