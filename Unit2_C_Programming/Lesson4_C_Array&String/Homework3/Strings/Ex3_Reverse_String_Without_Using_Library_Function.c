/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"
#include "string.h"

int main()
{
	int i;
	char text[10], reverse[10];
	printf("Enter the string: ");
	fflush(stdin);  fflush(stdout);
	gets(text);
	for(i = 0; i <= strlen(text); i++)
	{
		reverse[strlen(text)-i-1] = text[i];
	}
	printf("Reverse string is = %s", reverse);
	return 0;
}
