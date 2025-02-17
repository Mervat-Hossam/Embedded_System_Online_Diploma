/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	int n, sum;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	sum = n*(n+1)/2;
	printf("sum = %d", sum);
}
