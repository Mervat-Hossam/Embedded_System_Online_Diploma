/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &num);
	if(num > 0)
	{
		printf("%.2f is positive.", num);
	}
	else if(num < 0)
	{
		printf("%.2f is negative.", num);
	}
	else if(num == 0)
	{
		printf("You entered zero.");
	}
}
