/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for(j = i; j <= 9; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
