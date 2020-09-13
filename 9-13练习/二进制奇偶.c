#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*void printji(int b[])
{
	int i = 0;
	for (i = 0; i < 32; i += 2)
		printf("奇数位序列为：%d", b[i]);
}
void printou(int b[])
{
	int i = 0;
	for (i = 1; i < 32; i += 2)
		printf("偶数位序列%d", b[i]);
}*/
/*int main()
{
	int a = 0;
	printf("请输入所需数：\n");
	scanf("%d", &a);
	int b[32] = { 0 };
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		b[i] = a % 2;
		a = a / 2;
	};
	printf("奇数位序列：");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d", b[i]);
	};
	printf("\n");
	printf("偶数序列为：");
	for (i = 31; i >=0; i -= 2)
	{
		printf("%d", b[i]);
	};
	return 0;
}*/