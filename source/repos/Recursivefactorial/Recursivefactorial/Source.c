//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int i_fact(int);
//int R_fact(int);
//
//int main() {
//
//	int number;
//
//	printf("Please enter an integer number\n");
//	scanf("%d", &number);
//
//	printf("\n%d! = %d", number , i_fact(number)); //printf means number factorial of number, uses integer approach
//
//	printf("\n%d! = %d", number, r_fact(number)); //printf means number factorial of number, using recurisve approach here
//
//	return 0;
//}
//
//int i_fact(int num) //Integer approach
//{
//	int i, total = 1; //1 is neutral element for multiplication, which is why total = 1;
//
//	for (i = num; i > 0; i--) //Will run until i is 0, meaning there are no numbers left 
//	{
//		total *= i;
//	}
//
//	return total;
//}
//
//
//int r_fact(int num) //Recurisve function
//{
//	
//
//	if (num == 1) //If number is 1, means you have reached last number, returns 1
//	{
//		return 1;
//	}
//	else //Otherwsie return something
//	{
//		return num * r_fact(num - 1);
//	}
//
//}