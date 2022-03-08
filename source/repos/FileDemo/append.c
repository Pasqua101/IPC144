//#define _CRT_SECURE_NO_WARNINGS
////IPC144: Files (append)
//
//#include <stdio.h>
//
//#define NAME_SIZE 30
//
//struct Product
//{
//	int sku;
//	double price;
//	char name[NAME_SIZE + 1];
//};
//
//int main(void)
//{
//	const char filename[] = "PrdouctData.dat"; //Open file with Notepad ++ or just rename it to .txt
//	struct Product prod = { 20000, 588.25, "Candy bar" };
//
//	//Append places test at the end of the file instead of overwriting it like write option does
//	FILE* fp = fopen(filename, "a"); 
//	//Check to see if fp is NULL
//	if (fp != NULL) //If not NULL, print out info in the file
//	{
//		fprintf(fp, "%d|%.2lf|%s\n", prod.sku, prod.price, prod.name); // | (pipe) represents a delimter separation from the next field
//
//		fclose(fp); //Flushes remaining data in buffer to the file and closes connection to the file
//		fp = NULL; //Set back to safe empty NULL state
//	}
//
//	else //If fp is NULL, print error
//	{
//		printf("ERROR: Unable to open file for appending.\n");
//	}
//
//
//	return 0;
//
//}