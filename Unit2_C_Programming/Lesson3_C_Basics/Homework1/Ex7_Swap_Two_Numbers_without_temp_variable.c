/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	float a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter swapping, value of a = %.2f \nAfter swapping, value of b = %.2f", a, b);
}
