#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*int main()//求最大公约数
{
	int m = 0;
	int n = 0;
	int c = 0;
	int tmp = 0;
	printf("请输入m,n\n");
	scanf("%d%d",&m,&n);
	if (m < n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}
	if (m % n == 0)
		printf("最大公约数为%d",n);
	else if((m%n)!=0)
		{
		while (m % n != 0)
		{
			c = m % n;
			m = n;
			n = c;
		}
		printf("最大公约数为%d", n);
		}
}
int main()//输出芮年
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
			printf("%d是闰年\n", year);
	}
}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i < 201; i++)
	{
		for (j = 2; j < sqrt(i); )
		{
			if (i % j == 0)
			{
				break;
			}
			else j++;
		}
		if (j > sqrt(i))
			printf("%d\n", i);
	}
	return 0;
}*/
//输出数9的个数
int main()
{
	int i = 0;
	int count=0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9||i/9==10)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("总共有%d个", count);
}