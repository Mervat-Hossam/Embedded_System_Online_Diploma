/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"
#include "string.h"

int main()
{
	float a[3][3], trans[3][3];
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Enter the item (%d, %d) : ", i, j);
			fflush(stdin);  fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	printf("the  matrix is\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%.2f\t", a[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			trans[j][i] = a[i][j];
		}
	}
	printf("the Transpose Matrix is\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%.2f\t", trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
