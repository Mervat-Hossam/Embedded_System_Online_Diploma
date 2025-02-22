/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"

int main()
{
	int a[100][100], trans[100][100], rows, cols, i, j;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d", &rows, &cols);
	printf("Enter elements of matrix:\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("Enter elements a%d%d: ", i+1, j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			trans[j][i] = a[i][j];
		}
	}
	printf("\n\nTranspose of Matrix:\n");
	for(i = 0; i < cols; i++)
	{
		for(j = 0; j < rows; j++)
		{
			printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
