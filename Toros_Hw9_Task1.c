/*
 * =====================================================================================
 *
 *       Filename:  Toros_Hw9_Task1.c
 *       	Usage:  ./Toros_Hw9_Task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/06/2017 04:06:49 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chikere-Njoku Chibuike (), cchikerenjoku@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O*/
#include <stdlib.h>

/* Function Prototypes */
void Usage(char **info);
void ReadFile(char *fName, float num[]);
FILE *OpenCheckFile(char *fName);
void WriteFile(FILE *sFile, float num[]);

/* Main Program */
int main(int argc, char *argv[])
{
	char *fName;
	float num[];
	argv[1] = fName;

	if(argc != 2||argv[1] = "--help")
	{
		Usage();
	}
	else
	{
		ReadFile(fName,num);
		OpenCheckFile(fName);
	}

	return 0;
}


/* Function Definitions */

void Usage()
{
printf("Usage ./hw9_task1 <dataFile> <outFileName>");
return;
}

int ReadFile(char *fName, float num[])
{
	FILE *fName = fopen("inNumbers.dat","r");
	
	float num;
	int i = 0;
	int n;

	while(fscanf(fName, "%d", &num) > 0)
	{
		num[i] = n;
		i++;
	}
	fclose(fName);

return 0;

}

FILE *OpenCheckFile(char *fName)
{
	if(access(fopen(fName, F_OK) !=-1)
	{
		char i;
		printf("file exists. Do you want to overwrite it? Y/N");
		scanf("%s", i);
		if(i = "Y"||i = "y")
		{
			WriteFile();
		}
		else
		{
			return 0;
		}
	}
	else
	{
		printf("File does not yet exist.");
		WriteFile();
	}
	return 0;
}

void WriteFile(FILE *sFile, float num[]);
{
	FILE *sFile = fprint
}
