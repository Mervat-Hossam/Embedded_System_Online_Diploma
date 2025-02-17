/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	int num;
	unsigned long long int fact = 1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	if(num >= 0)
	{
		while(num > 0)
		{
			fact = fact * num;
			num--;
		}
		printf("Factorial = %lu", fact);

	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
}
