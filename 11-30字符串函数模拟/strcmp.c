/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int My_strcmp(const char* str1,const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char* arr = "abcde";
	char* brr = "abdde";
	int ret = My_strcmp(arr, brr);
	if (ret <0)
	{
		printf("小于；");
	}
	else if (ret>0)
	{
		printf("大于");
	}
	else if (ret == 0)
	{
		printf("等于");
	}
}*/