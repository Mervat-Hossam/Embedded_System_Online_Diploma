/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	float num1, num2, mul;
	printf("Enter two numbers:");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f", &num1, &num2);
	mul = num1 * num2;
	printf("Product: %f", mul);
}
