/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* My_strcpy(char* brr, const char* arr)
{
	assert(arr);
	assert(brr);
	char* tmp = brr;
	while (*arr)
	{
		*tmp = *arr;
		arr++;
		tmp++;
	}
	*tmp = *arr;
	return brr;
}
int main()
{
	char *str = "abcdef";
	char brr[20] = { 0 };
	printf("¿½±´×Ö·û´®ºóÊä³ö%s", My_strcpy(brr, str));
	return 0;
}*/