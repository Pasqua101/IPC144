//#pragma once
//#define MAX_PRODUCT_NAME_LEN 101 //Random number chosen for length of a product name
////Structures needed 
//
//struct SaleDate
//{
//	int month;
//	int day;
//	int year;
//};
//
//struct SingleSaleRecord
//{
//	int numberSold;
//	float salePrice;
//	//Calling SaleDate struct into SingleSaleRecord
//	struct SaleDate saleDate;
//};
//
//struct ProductSalesList
//{
//	char prodName[MAX_PRODUCT_NAME_LEN];
//	float revenue;
//	struct SingleSaleRecord ProdSaleRecord;
//};
//
//struct DailySalesList
//{
//
//	struct SingleSaleRecord  DailySaleRecord;
//};
//
////Function prototype
//int readSalesFile(FILE* fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales);
//
//void addSale(struct ProductSalesList* prodlist, struct DailySalesList* dailySales, char name, struct SingleSaleRecord* saleRec[]);
