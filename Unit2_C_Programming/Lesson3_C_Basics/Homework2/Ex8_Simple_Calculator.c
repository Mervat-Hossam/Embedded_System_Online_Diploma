/*
 * main.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Mervat Hossam
 */
#include "stdio.h"

void main()
{
	float num1, num2;
		char op;
		printf("Enter operator either + or - or * or divide : ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &op);
		printf("Enter two operands: ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f", &num1, &num2);
		switch(op)
		{
		case '+':
			printf("%.1f + %.1f = %.1f", num1, num2, num1+num2);
			break;
		case '-':
				printf("%.1f - %.1f = %.1f", num1, num2, num1-num2);
				break;
		case '*':
				printf("%.1f * %.1f = %.1f", num1, num2, num1*num2);
				break;
		case '/':
				if(num2 != 0)
				{
					printf("%.1f / %.1f = %.1f", num1, num2, num1/num2);
				}
				else
				{
					printf("Error! can't divide");
				}
				break;
		default:
			printf("Error! operator is not correct");
			break;
		}
}
