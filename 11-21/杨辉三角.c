/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10
int main()
{
	int n = 0;
	int i = 0;
	int a[N][N] = { 0 };
	int j = 0;
	printf("请输入打印杨辉三角的行数(不超过10）：\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		a[i][0] = a[i - 1][j - 1] = 1;
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/