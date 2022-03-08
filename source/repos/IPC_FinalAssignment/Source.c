//#define _CRT_SECURE_NO_WARNINGS
//#define MAX_PRODUCT_NAME_LEN 101 //Random number chosen for length of a product name
//#include <stdio.h>
//
////#include "FileRead.h"
////Structures needed 
//
//struct DailySalesList
//{
//	int month;
//	int day;  
//	int year;
//	float revenue;
//
//};
//
//struct SingleSaleRecord
//{
//	int numberSold;
//	float salePrice;
//	struct DailySalesList saleDate;
//
//};
//
//struct ProductSalesList
//{
//	char prodName[MAX_PRODUCT_NAME_LEN];
//	int numSold;
//	float revenue;
//	
//};
//
//
////Function prototype
//int readSalesFile(FILE* fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales);
//
//void addSale(struct ProductSalesList* prodlist, struct DailySalesList* dailySales, char name, struct SingleSaleRecord saleRec[]);
//
//
//int main(void)
//{
//	const char filename[] = "data.txt"; //Creating the name of the text file to be used
//	//Setting both structs to empty
//	struct ProductSalesList prodList[5] = { 0 };
//	struct DailySalesList dailyList[5] = { 0 };
//	int SaleRead; //Will be return variable for readSalesFile function
//	int optionNum, flag = 0, i = 0;
//
//
//	FILE* fp = fopen(filename, "r"); //Opening data.txt for reading
//
//	//SaleRead = readSalesFile(fp, prodSales, dailySales); //Value in SaleRead becomes 5 when the function is called
//
//	if (fp != NULL)
//	{
//		while (flag == 0)
//		{
//			printf("****** Seneca Gardens ******\n");
//			printf("Select one of the following options:\n");
//			printf("1-View All Sales\n");
//			printf("2-View Sales by Product\n");
//			printf("3-View Sales by Date sorted by revenue\n");
//			printf("0-Exit\n");
//			scanf("%d", &optionNum);
//
//			if (optionNum == 1) //If user selects option 1
//			{
//
//				SaleRead = readSalesFile(fp, prodList, dailyList);
//				printf("DAY MONTH YEAR                       PRODUCT #SOLD   PRICE\n");
//				for (i = 0; i < SaleRead; i++)
//				{
//					printf("Num sold is %d", prodList[i].numSold);
//				}
//			}
//
//			else if (optionNum == 2) //if user selects option 2
//			{
//				//SaleRead = readSalesFile(fp, prodSales, dailySales); //Passing filepointer and address of prodSales and dailySales//Check to see if fp is NULL
//				printf("PRODUCT #SOLD REVENUE\n");
//				for (i = 0; i < SaleRead; i++)
//				{
//
//
//				}
//
//			}
//			else if (optionNum == 3) //If user selects option 3
//			{
//				//SaleRead = readSalesFile(fp, prodSales, dailySales); //Passing filepointer and address of prodSales and dailySales
//
//				printf("REVENUE DAY MONTH YEAR\n");
//				for (i = 0; i < SaleRead; i++)
//				{
//
//
//				}
//			}
//
//			else if (optionNum == 0) //If user selects option 1, end the loop and program
//			{
//				printf("Good Bye");
//				flag = 1;
//			}
//
//			else { //If user enters a number not supported by the program, print error message
//				printf("Enter a valid integer between 0 and 3: ");
//				scanf("%d", optionNum);
//			}
//
//		}
//
//		fclose(fp); //Flushing out remaining data in buffer for the file and closing it for reading
//		fp = NULL; //Setting fp back to a safe empty NULL state
//	}
//
//	else {
//		printf("File could not be read"); //Remove in final version
//	}
//	return 0;
//}
//
//		
//
//
//int readSalesFile(FILE* fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales)
//{
//	int numberSalesRead = 0, valuesRead;
//
//	struct SingleSaleRecord saleRec = { 0 };
//
//	char productName[MAX_PRODUCT_NAME_LEN];
//
//	while (!feof(fp))
//	{
//		valuesRead = fscanf(fp, "%[^/]/%d/%lf/%d/%d/%d%*c", productName, &saleRec.numberSold, &saleRec.salePrice, &saleRec.saleDate.month, &saleRec.saleDate.day, &saleRec.saleDate.year); //Scans data in txt file 5 separate times 
//
//		if (valuesRead > 0) //Calls on addSale function 5 times
//		{
//			addSale(prodList, dailySales, productName, &saleRec);
//
//			numberSalesRead++;
//
//		}
//
//	}
//
//	return numberSalesRead;
//
//}
////addSale adds item from the data.txt into struct array
//void addSale(struct ProductSalesList* prodlist, struct DailySalesList* dailySales, char localName, struct SingleSaleRecord saleRec[])
//{
//
//	
//	
//	
//}
