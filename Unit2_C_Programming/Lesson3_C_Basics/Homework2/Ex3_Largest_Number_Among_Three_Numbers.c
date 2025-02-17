/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	float num1, num2, num3;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &num1, &num2, &num3);
	if(num1 >= num2 && num1 >= num3)
	{
		printf("Largest number = %.2f", num1);
	}
	else if(num2 >= num1 && num2 >= num3)
	{
		printf("Largest number = %.2f", num2);
	}
	else if(num3 >= num1 && num3 >= num2)
	{
		printf("Largest number = %.2f", num3);
	}
}
