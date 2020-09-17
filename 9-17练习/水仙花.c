/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	for (i = 0; i < 100000; i++)
	{
		if (i < 10)
		{
			printf("%d是水仙花数\n", i);
		}
		else if (i < 100)
		{
			a = i % 10;
			b = i / 10 % 10;
			if (i == a * a + b * b)
				printf("%d是水仙花数\n", i);
		}
		else if (i < 1000)
		{
			a = i % 10;
			b = i / 10 % 10;
			c = i / 100 ;
			if(i==a*a*a+b*b*b+c*c*c)
				printf("%d是水仙花数\n", i);
		}
		else if (i < 10000)
		{
			a = i % 10;
			b = i / 10 % 10;
			c = i / 100 % 10;
			d = i / 1000 ;
			if (i == a*a*a*a + b*b*b*b+c*c*c*c+d*d*d*d)
				printf("%d是水仙花数\n", i);
		}
		else
		{
			a = i % 10;
			b = i / 10 % 10;
			c = i / 100 % 10;
			d = i / 1000 % 10;
			e = i / 10000;
			if (i == a * a * a * a*a + b * b * b * b*b + c * c * c * c*c + d * d * d * d*d+e*e*e*e*e)
				printf("%d是水仙花数\n", i);
		}
	}
	return 0;
}*/