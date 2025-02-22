/*
 * main.c
 *
 *  Created on: Feb 22, 2025
 *      Author: Mervat Hossam
 */
#include "stdio.h"

int main()
{
	int a[100], n, element, location,i;
	printf("Enter no of elements: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEntered the element to be searched: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &element);
	for(i = 0; i < n; i++)
	{
		if(a[i] == element)
		{
			location = i+1;
			break;
		}
	}
	if(i != n)
	{
		printf("Number found at location = %d", location);
	}
	else
	{
		printf("Number not found");
	}
	return 0;
}
