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
	printf("\nEntered the element to be inserted: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &element);
	printf("\nEntered the location: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &location);
	for(i = n; i > location-1; i--)
	{
		a[i] = a[i-1];
	}
	a[location-1] = element;
	for(i = 0; i < n+1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
