/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c = %d", c, c);
}
