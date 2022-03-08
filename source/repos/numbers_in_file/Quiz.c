#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAXSIZE 8 //Changed MAXSIZE macro to 8, since that is the number of people in myData.txt

struct Record
{

	int id;

	char firstName[31];

	char lastName[31];

	char cellPhone[11];

};

int main(void)

{

	struct Record record[MAXSIZE];

	int numberOfRecords = 0;

	FILE* fp = NULL;

	int i = 0;

	fp = fopen("myData.txt", "r"); //Reading what's in the file, instead of writing to it

	if (fp != NULL) //Changed from fp == NULL to fp != NULL
	{

		while (fscanf(fp, "%s %s %s", record[i].firstName, record[i].lastName, record[i].cellPhone) != EOF && i < MAXSIZE)
		{

			record[i].id = i + 1; //Adds numbers to each id, i + 1 used since i starts at 0

			numberOfRecords++; //Increasing value of numberOfRecord each time the loop repeats

			i++; //Increasing the value of i each time the loop repeats

		}

	}



	fp = fopen("myData.txt", "w"); //Making it have the ability to write to the file myData.txt instead of appending to it

	if (fp != NULL) //Changed from fp == NULL to fp != NULL
	{

		for (i = 0; i < numberOfRecords; i++)
		{
			fprintf(fp, "%d %s %s %s\n", record[i].id, record[i].firstName, record[i].lastName, record[i].cellPhone); //Gave space for printed values in fprintf
		}

	}

	fclose(fp); //Closing input to myData.txt


	return 0;

}