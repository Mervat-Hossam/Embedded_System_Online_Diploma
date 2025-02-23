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
	int freq = 0, i;
	char text[1000], c;
	printf("Enter a string: ");
	fflush(stdin);  fflush(stdout);
	gets(text);
	printf("\nEnter a character to find frequency: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c", &c);
	for(i = 0; text[i] != 0; i++)
	{
		if(c == text[i])
		{
			freq++;
		}
	}
	printf("\nFrequency of %c = %d", c, freq);
	return 0;
}
