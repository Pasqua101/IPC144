//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MIN_YEAR 2010
//#define MAX_YEAR 2021
//
//int main() 
//{
//	const int JAN = 1;
//	const int DEC = 12;
//	int month, year;
//	int count = 0;
//
//	printf("General Well-being Log\n");
//	printf("======================\n");
//
//	while (count == 0)
//	{
//		
//		printf("Set the year and month for the well-being log (YYYY MM): "); //Getting the user to enter the year and month
//		scanf("%d %d", &year, &month);
//
//		if ((year < MIN_YEAR || year > MAX_YEAR) && (month < JAN || month > DEC)) //If the year entered is more than the max year or less than min year, 
//																				 //and the month entered is less than the value JAN or more the the value of DEC, it will print this error
//		{
//			printf("   ERROR: The year must be between 2010 and 2021 inclusive\n");
//			printf("   ERROR: Jan.(1) - Dec.(12)\n");
//		}
//
//		else if (year < MIN_YEAR || year > MAX_YEAR) //If year entered is less than the minimum year or more than the max year, an error is printed
//		{
//			printf("   ERROR: The year must be between 2010 and 2021 inclusive\n");
//		}
//
//		else if (month < JAN || month > DEC) //If month entered is less than the value of JAN or more than the value of DEC, than this error will print
//		{
//			printf("   ERROR: Jan.(1) - Dec.(12)\n");
//		}
//
//		else //Else statment for when the user enters in number accepted by the program
//		{
//			printf("\n*** Log date set! ***\n");
//			switch(month) //Switch being used to determine what month should printed depending on the number in the month variable
//			{
//			case 1:
//				printf("\nLog starting date: %d-JAN-01", year);
//				break;
//			case 2:
//				printf("\nLog starting date: %d-FEB-01", year);
//				break;
//			case 3:
//				printf("\nLog starting date: %d-MAR-01", year);
//				break;
//			case 4:
//				printf("\nLog starting date: %d-APR-01", year);
//				break;
//			case 5:
//				printf("\nLog starting date: %d-MAY-01", year);
//				break;
//			case 6:
//				printf("\nLog starting date: %d-JUN-01", year);
//				break;
//			case 7:
//				printf("\nLog starting date: %d-JUL-01", year);
//				break;
//			case 8:
//				printf("\nLog starting date: %d-AUG-01", year);
//				break;
//			case 9:
//				printf("\nLog starting date: %d-SEP-01", year);
//				break;
//			case 10:
//				printf("\nLog starting date: %d-OCT-01", year);
//				break;
//			case 11:
//				printf("\nLog starting date: %d-NOV-01", year);
//				break;
//			case 12:
//				printf("\nLog starting date: %d-DEC-01", year);
//				break;
//			}
//		break;
//		}
//
//	}
//	
//	return 0;
//}
