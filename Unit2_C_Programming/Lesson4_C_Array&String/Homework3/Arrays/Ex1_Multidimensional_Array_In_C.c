/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"

int main()
{
	float a[2][2], b[2][2], sum[2][2];
	int i, j;
	printf("Enter the elements of 1st matrix\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nSum Of Matrix:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%.1f\t", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
