/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"

int main()
{
	int n, i;
	float num[100], sum = 0, average;
	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num[i]);
		sum += num[i];
	}
	average = sum / n;
	printf("Average= %.2f", average);
	return 0;
}
