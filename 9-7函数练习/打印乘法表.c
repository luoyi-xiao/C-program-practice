#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Ptable(int a)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%d=%-4d", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	printf("��������Ҫ��ӡ�ļ�*���ĳ˷���\n");
	scanf("%d", &i);
	Ptable(i);
	return 0;
}