#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
int cmp1(const void* a, const void* b) 
{
	const char* x = *(char**)a;
	const char* y = *(char**)b;
	return strcmp(x, y);
}
int main()
{
	int i;
	char* arr[] = { "a4bcd","a1bcd","a3bcd","a2bcd" };
	int num = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, num, sizeof(char*), &cmp1);
	for (i = 0; i < num; i++)
	{
		printf("%s\n", arr[i]);
	}
}