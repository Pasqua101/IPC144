//#include<stdio.h>
//#define SZ 3
//struct OrderItem
//{
//	int SKU;
//	int quantityInStock;
//	int reorderPoint;
//	int reorderQuantity;
//};
//struct OrderList
//{
//	int SKU;
//	int quantity;
//};
//
//int main(void)
//{
//	struct OrderItem items[SZ] = { {101, 5, 5, 6},{102, 3, 4, 5},{103, 7, 5, 7} };
//	struct OrderList orders[SZ] = { { 0 } };
//	int i;
//	for (i = 0; i < SZ; i++)
//	{
//		if (items[i].quantityInStock <= items[i].reorderPoint)
//		{
//			orders[i].SKU = items[i].SKU;
//			orders[i].quantity = items[i].reorderQuantity;
//			printf("%d of %d added to order list.\n", orders[i].quantity, orders[i].SKU);
//		}
//		else
//		{
//			orders[i].SKU = -1;
//			printf("%d fully stocked.\n", items[i].SKU);
//		}
//	}
//	return 0;
//}