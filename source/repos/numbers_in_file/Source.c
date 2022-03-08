//Practice done in class from week 9 for reading from a file

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h> //using string libaray
#define SZ 31 //Max limit of string size is 31

int main(void) //From string quiz
{
	char str1[SZ] = "Charlotte's ";
	char str2[SZ] = "Spider's web";
	char str3[SZ] = { 0 }; //Declared as zero to assign it a safe empty state
	strcat(str1, &str2[9]); //linking string one to char 9 and above in string 2
	if (!(strcmp(str1, "Charlotte's web"))) //Comparing strings, if string 1 is the same as Charlotte's web
	{
		strcpy(str3, " is the "); //Copies string " is the " to string 3
	}
	else
	{
		strcpy(str3, " is not the ");
	}
	printf("%s %s %s!\n", str1, str3, str2); //Prints out all 3 strings in a message, which is Charlotte's web is the Spider's web
	return 0; //returns control to the operating system
}*/



//int main() {
//	FILE *input, *output; //pointer for input and output of the file
//	int count = 0, num, sum = 0;
//	double meanAvg = 0;
//
//	input = fopen("numbers.txt","r"); //Opens numbers.txt file with read permissions
//	output = fopen("result.txt", "w"); //Opens result.txt file with write permissions
//
//	do {
//
//		fscanf(input, "%d", &num); //reads number inputted to file
//		sum += num; //Adds number to sum
//		count++;
//
//
//	} while (!feof(input)); //while is used to check to see if the end of the file has been reached. will retunr flase if it han't gone to the end of the file
//							//Will retunr true if it reached the end of the file
//
//	meanAvg = (double) sum / count; //variable is casted to double to make sure no data is lost
//
//	//fprintf, prints output to result.txt
//	fprintf(output, "\n The number of numbers = %d", count);
//	fprintf(output, "\n The sum of all numbers = %d", sum);
//	fprintf(output, "\n The mean average of the numbers %.2f", meanAvg);
//
//
//	fclose(input); //closes input, to save resources
//	fclose(output); //closes output, to save resources
//
//	return 0;
//}