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
	printf("Enter a integer: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &num);
	printf("You entered: %d", num);
}
