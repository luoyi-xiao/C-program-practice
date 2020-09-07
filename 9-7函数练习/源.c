/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void judge(int i)//判断是否是素数，打印素数
{
	int flag = 0;
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i %j == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%d是素数\n", i);
}
int main()
{
	int i = 0;
	for (i = 100; i < 201; i++)
		judge(i);
	return 0;
}*/