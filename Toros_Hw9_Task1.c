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
	char **info;
	char *fName;
	FILE *sFile;
	float num[12];
	

	if(argc != 2||(argv[1] = "--help"))
	{
		Usage(info);
	}
	else
	{
		ReadFile(fName,num);
		OpenCheckFile(fName);
		WriteFile(sFile, num);
	}

	return 0;
}


/* Function Definitions */

void Usage(char **info)
{
printf("Usage ./hw9_task1 <dataFile> <outFileName>");
return;
}

void ReadFile(char *fName, float num[])
{
	
	FILE *inFile = fopen("inNumbers.dat","r");
	int i = 0;
	int n;

	while(fscanf(inFile, "%f", num) > 0)
	{
		num[i] = n;
		i++;
	}
	fclose(inFile);
}

FILE *OpenCheckFile(char *fName)
{
	if(fName != NULL)
	{
		char i;
		printf("File exists. Do you want to overwrite it? Y/N");
		scanf("%s",&i);
		if((i = 'Y')||(i = 'y'))
		{
			printf("File was succesfully opened");
		}
		else
		{
			printf("The file will not be overwritten.");
			exit(1);
		}
	}
	else
	{
		printf("File does not yet exist.");
	
	}
	return 0;
}

void WriteFile(FILE *sFile, float num[]);
{
	FILE *sFile = fprint;


return 0;
}
