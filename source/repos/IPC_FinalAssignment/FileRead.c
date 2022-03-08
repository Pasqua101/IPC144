//#define _CRT_SECURE_NO_WARNINGS
//#define MAX_PRODUCT_NAME_LEN 101 //Random number chosen for length of a product name
//#include <stdio.h>
//#include "FileRead.h"
//
//int readSalesFile(FILE* fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales)
//{
//    int numberSalesRead = 0, valuesRead;
//
//    struct SingleSaleRecord saleRec = { 0 };
//
//    char productName[MAX_PRODUCT_NAME_LEN];
//
//    while (!feof(fp))
//    {
//        valuesRead = fscanf(fp, "%[^/]/%d/%lf/%d/%d/%d%*c", productName, &saleRec.numberSold, &saleRec.salePrice, &saleRec.saleDate.month, &saleRec.saleDate.day, &saleRec.saleDate.year);
//
//        if (valuesRead > 0) //Calls on addSale function 5 times
//        {
//
//            addSale(prodList, dailySales, productName, &saleRec);
//
//            numberSalesRead++;
//
//        }
//
//    }
//
//    return numberSalesRead;
//
//}
////addSale adds item from the data.txt into struct array
//void addSale(struct ProductSalesList* prodlist, struct DailySalesList* dailySales, char localName, struct SingleSaleRecord* saleRec[])
//{
//    const char filename[] = "data.txt"; //Creating the name of the text file to be used
//    int i = 0;
//    FILE* fp;
//    fp = fopen(filename, "r"); //Opening data.txt for reading
//    
//    while (!feof(fp)) //While loop will read to the end of the file, essiently while fp!= end of file(feof)
//    {
//        fscanf(fp, "%s|%d|%lf|%d|%d|%d", prodlist[i].prodName, dailySales[i].DailySaleRecord.salePrice, dailySales[i].DailySaleRecord.saleDate.month, dailySales[i].DailySaleRecord.saleDate.day, dailySales[i].DailySaleRecord.saleDate.year);
//        i++;
//        fprintf(fp, "%s|%d|%lf|%d|%d|%d", prodlist[i].prodName, dailySales[i].DailySaleRecord.salePrice, dailySales[i].DailySaleRecord.saleDate.month, dailySales[i].DailySaleRecord.saleDate.day, dailySales[i].DailySaleRecord.saleDate.year);
//    }

    //for (i = 0; i < 5; i++)
    //{
    //    fscanf(fp, "%s|%d|%lf|%d|%d|%d", dailySales[i].DailySaleRecord.numberSold, dailySales[i].DailySaleRecord.salePrice, dailySales[i].DailySaleRecord.saleDate.month, dailySales[i].DailySaleRecord.saleDate.day, dailySales[i].DailySaleRecord.saleDate.year);
    //    
    //}
    //
    //
    //fclose(fp);
    ////int i = 0;

    ////for (i = 0; i < 5; i++) //LookB at fileDemo project to see how to save info from a file
    ////{
    ////    fscanf("%[^/]/%d/%lf/%d/%d/%d%*c", saleRec[i]->numberSold, saleRec[i]->salePrice, saleRec[i]->saleDate.month, saleRec[i]->saleDate.day, saleRec[i]->saleDate.year);
    ////}

    ///*while (fscanf(fp, "%d%lf", ))
    //{

    //}*/

//}
