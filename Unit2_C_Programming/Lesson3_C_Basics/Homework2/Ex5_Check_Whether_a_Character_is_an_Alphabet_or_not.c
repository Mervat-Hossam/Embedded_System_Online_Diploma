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
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		printf("%c is an alphabet.", c);
	}
	else
	{
		printf("%c is not an alphabet.", c);
	}
}
