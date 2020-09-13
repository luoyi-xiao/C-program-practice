/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("输入a的值：\n");
	scanf("%d", &a);
	int count = 0;
	while (a)
	{
		a = a &(a - 1);
		count++;
	}
	printf("1的个数为：%d", count);
}*/