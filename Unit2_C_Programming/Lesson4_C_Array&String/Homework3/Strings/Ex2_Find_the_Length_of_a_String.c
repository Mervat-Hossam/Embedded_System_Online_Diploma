/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"

int main()
{
	int len = 0, i = 0;
	char text[1000];
	printf("Enter a string: ");
	fflush(stdin);  fflush(stdout);
	gets(text);
	while(text[i] != '\0')
	{
		len++;
		i++;
	}
	printf("\nLength of string = %d", len);
	return 0;
}
