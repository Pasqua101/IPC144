//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_ITEMS_PER_SALE 20
//#define MAX_INVENTORY 10
//#define MAX_SALES 20
//
//struct Inventory
//{
//    int sku;
//    int numInStock;
//    double price;
//};
//
//struct SaleRecord
//{
//    int sku[MAX_ITEMS_PER_SALE];
//    int numEachItemSold[MAX_ITEMS_PER_SALE];
//    int numItemsInSale;
//};
//
//int main(void)
// {
//    struct Inventory inventory[MAX_INVENTORY] = { //Sets SKU to 623 and 200, sets numInStock to 71 and 26, then sets price to 9.99 and 19.75 in Inventory contruct
//        {623, 71, 9.99},
//        {200, 26, 19.75}
//    };
//    struct SaleRecord sales[MAX_SALES] = { //Sets first value in SKU array in SaleRecord construct to 200 and sets first value in numEachItemSold array to 3. Sets numIteamsInSale variable to 1 Then sets second value in sku array to 623 and second value in numEachItemSold array to 2 and changs first value to 1. Sets numIteamsInSale variable to 2
//        { {200}, {3}, 1},
//        { {200, 623}, {1,2}, 2}
//    };
//    
//    int numInventoryItems = 2, numSales = 2; //Initializes numInventoryItems and numSales as integeres with a value of 2
//    int i, j, k, sku, numSold, found; //Intializes variables i, j, k, sku, numSold and found as integer variables with an unknown value
//    double sum = 0.0; //Initializes the variable sum as a double and gives it a value of 0.0
//    
//        
//    for (i = 0; i < numSales; i++) //Starts a for loop that will run 2 times, and sets the value ofi to 0 and will add to the i variable everytime it repeats
//    {
//        for (j = 0; j < sales[i].numItemsInSale; j++) //Starts a for loop that will run   , and sets the j variable to 0 and adds to it each time the loop is repeated
//        {
//            sku = sales[i].sku[j]; //Makes sku variable 200 by indexing the sku array which wll look for the first value in the array and then increasing the value it looks at each time the loop runs
//            numSold = sales[i].numEachItemSold[j]; //Makes numSold variable equal to the value of numEachItemSold in the sales array for the SaleRecord construct
//            found = 0; //Sets found variable to 0
//            for (k = 0; k < numInventoryItems && !found; k++) //Starts a for loop that will run when k is less than 2 and does not equal 0, and sets the k variable to 0, adding to it each time the loop repeats
//            {
//                if (inventory[k].sku == sku) //If the value of k of sku in the inventory construct, is equal to sku variale in the main construct, then this if will run
//                {
//                    sum += inventory[k].price * numSold; //Multiply the price variable for the value of k in inventory construct with the value of numSold and add it to the sum variable
//                    found = 1; //Found is a flag variable and will stop the loop once this line is executed
//                }
//            }
//        }
//    }
//    printf("Total of goods sold = %.2lf\n", sum); //Prints Total of good sold = 98.98 and a new line below print statment
//    
//    return 0; //Returns control to operating system
// }
