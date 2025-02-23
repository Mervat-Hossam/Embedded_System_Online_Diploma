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
	float degrees[10];
	for(i = 0; i < 10; i++)
	{
		printf("\nEnter student %d degree : ", i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f", &degrees[i]);
	}
	for(i = 0; i < 10; i++)
	{
		printf("Student %d degree is : %f\n",i+1, degrees[i]);
	}
	return 0;
}
