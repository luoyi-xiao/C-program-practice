#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 13 / 2 - i; j++)
			printf(" ");
		for (j = 13 / 2 - i; j <= 13 / 2 + i; j++)
			printf("*");
		for (j = 13 / 2 + i + 1; j < 13; j++)
			printf(" ");
		printf("\n");
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j<i; j++)
			printf(" ");
		for (j = i; j < 13- i; j++)
			printf("*");
		for (j = 13-i; j < 13; j++)
			printf(" ");
		printf("\n");
	}
	return 0;
}