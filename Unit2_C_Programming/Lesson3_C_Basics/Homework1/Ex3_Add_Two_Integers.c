/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	int num1, num2, sum;
	printf("Enter two integers:");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("Sum: %d", sum);
}
