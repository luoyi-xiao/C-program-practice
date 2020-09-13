#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入a,b\n");
	scanf("%d%d", &a, &b);
	printf("输出a,b的值为%d,%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("输出a,b的值为%d,%d", a, b);
}