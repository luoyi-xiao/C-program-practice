/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* My_strcat( char* str1,const char* str2)
{
	assert(str1);
	assert(str2);
	char* tmp = str1;
	while (*str1)
	{
		str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = *str2;
	return tmp;
}
int main()
{
	char arr[100] = "hello ";
	char* brr = "world!";
	printf("%s", My_strcat(arr,brr));

}*/