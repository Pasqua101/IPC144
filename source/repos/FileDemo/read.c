#define _CRT_SECURE_NO_WARNINGS
//IPC144: Files (read)

#include <stdio.h>

#define NAME_SIZE 30

struct Product
{
	int sku;
	double price;
	char name[NAME_SIZE + 1];
};

int main(void)
{
	const char filename[] = "PrdouctData.dat"; //Open file with Notepad ++ or just rename it to .txt
	struct Product prod[2] = { 0 };
	int i = 0;
	char ch;

	//r reads data from ProductData.dat
	FILE* fp = fopen(filename, "r"); //Read only works if the file exists

	//Check to see if fp is NULL
	if (fp != NULL) //If not NULL, print out info in the file
	{
		//& is used to point to the address of the integer and double, & is not used for string since a string is already a pointer
		//%c at the end gets rid of the newline character in the end, also used to make sure if the end of the file was reached
		while (i<2 && fscanf(fp, "%d|%lf|%30[^\n]s%c", &prod[i].sku, &prod[i].price, prod[i].name, &ch) == 3) //While i is less than 2 and fscanf reads 3 inputs, increment counter (i)
		{
			//Checking if too many char's were exsisting for the name member (> 30 chars)
			if (ch != '\n')
			{
				while(fgetc(fp) != '\n'); //<=--- is intentional, only meant to discard what's left in buffer until it gets a newline
			}

			i++;
		}
		
		fclose(fp); //Flushes remaining data in buffer to the file and closes connection to the file
		fp = NULL; //Set back to safe empty NULL state
	}

	else //If fp is NULL, print error
	{
		printf("ERROR: Unable to open file for reading.\n");
	}

	//display contents of what was read from a file
	for (i = 0; i < 2; i++)
	{
		printf("Sku: %d, Price:$%.2lf, Name:%s\n", prod[i].sku, prod[i].price, prod[i].name);
	}


	return 0;

}