#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������a,b\n");
	scanf("%d%d", &a, &b);
	printf("���a,b��ֵΪ%d,%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("���a,b��ֵΪ%d,%d", a, b);
}