////Walkthrough quiz, had to explain the order of each step
//#include<stdio.h>
//#define SZ 3
//struct Statement
//{
//	int id;
//	double owing;
//};
//void print(const struct Statement month[], int sz);
//int main(void)
//{
//	struct Statement april[SZ] = { {10, 45.6},{11, 34.7},{12, 23.5} };
//	print(april, SZ);
//	return 0;
//}
//void print(const struct Statement month[], int sz)
//{
//	double total = 0.0;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		total += month[i].owing;
//		printf("Id #%d - $%.2lf\n", month[i].id, month[i].owing);
//	}
//	printf("\nApril total = $%.2lf", total);
//	return;
//}