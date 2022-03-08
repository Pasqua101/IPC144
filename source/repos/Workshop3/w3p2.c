//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MIN_YEAR 2010
//#define MAX_YEAR 2021
//#define LOG_DAYS 3
//
//
//int main()
//{
//	const int JAN = 1;
//	const int DEC = 12;
//	int month, year, day = 1;
//	double morn, eve;
//	int count = 0;
//	int flag = 0;
//	double morn_total = 0, eve_total = 0, total;
//	double morn_avg = 0, eve_avg = 0, total_avg;
//	int i = 0, j = 0; //Variables for for loops
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
//		else if ((year >= MIN_YEAR || year < +MAX_YEAR) && (month >= JAN || month <= DEC))//Else if statment for when the user enters in number accepted by the program
//		{
//			printf("\n*** Log date set! ***\n");
//			break;
//
//		}
//	}
//
//	switch (month) //Switch being used to determine what month should printed depending on the number in the month variable
//	{
//	case 1:
//		printf("\n%d-JAN-01", year);
//		break;
//	case 2:
//		printf("\n%d-FEB-01", year);
//		break;
//	case 3:
//		printf("\n%d-MAR-01", year);
//		break;
//	case 4:
//		printf("\n%d-APR-01", year);
//		break;
//	case 5:
//		printf("\n%d-MAY-01", year);
//		break;
//	case 6:
//		printf("\n%d-JUN-01", year);
//		break;
//	case 7:
//		printf("\n%d-JUL-01", year);
//		break;
//	case 8:
//		printf("\n%d-AUG-01", year);
//		break;
//	case 9:
//		printf("\n%d-SEP-01", year);
//		break;
//	case 10:
//		printf("\n%d-OCT-01", year);
//		break;
//	case 11:
//		printf("\n%d-NOV-01", year);
//		break;
//	case 12:
//		printf("\n%d-DEC-01", year);
//		break;
//	}
//	printf("\n");
//	for (i = 1; i <= 3 && flag == 0; i++) //For loop for morning ratings
//	{
//		printf("   Morning rating (0.0-5.0): ");
//		scanf("%lf", &morn);
//
//		if (morn < 0.0 || morn > 5.0) //If the rating entered is wrong
//		{
//			printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
//			i--;
//
//		}
//		else
//		{
//			morn_total += morn;
//			for (j = 0; j <= 3 && flag == 0; j++) //For loop for evening rating
//			{
//				printf("   Evening rating (0.0-5.0): ");
//				scanf("%lf", &eve);
//
//				if (eve < 0.0 || eve > 5.0) //If the rating entered is wrong
//				{
//					printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
//					j--;
//				}
//
//				else
//				{
//					eve_total += eve;
//					day++;
//					if (j == LOG_DAYS) //Flag to make the loop stop
//					{
//						day--;
//						flag = 1;
//						printf("\n%d-FEB-0%d\n", year, day);//Unfortunately I was unsure on how to print a new day without hard coding it, 
//													   //so this was my best solution to printing a new day when the loop ran
//					}
//					else if (day <= 3)
//					{
//						
//						printf("\n%d-FEB-0%d\n", year, day); //Unfortunately I was unsure on how to print a new day without hard coding it, 
//													        //so this was my best solution to printing a new day when the loop ran
//						
//					}
//					
//					
//					break;	
//				}
//			}
//
//		}
//	}
//	printf("\nSummary\n");
//	printf("=======\n");
//
//	printf("Morning total rating: %.3lf\n", morn_total);
//	printf("Evening total rating: %.3lf\n", eve_total);
//	printf("----------------------------\n");
//	total = morn_total + eve_total; //Formula to find the total of both of the ratings
//	printf("Overall total rating: %.3lf\n\n", total);
//	morn_avg = morn_total / LOG_DAYS; //Formula to find the average of the morning ratings
//	eve_avg = eve_total / LOG_DAYS; //Formula to find the average of the evening ratings
//	printf("Average morning rating:  %.1lf\n", morn_avg);
//	printf("Average evening rating:  %.1lf\n", eve_avg);
//
//	printf("----------------------------\n");
//	total_avg = (morn_avg + eve_avg) / 2; //Formula to find the average of all of the ratings
//	printf("Average overall rating:  %.1lf", total_avg);
//	return 0;
//	
//}