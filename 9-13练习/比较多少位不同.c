/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int numbit(int n)
{
	int number= 0;
	while (n)
	{
		n = n & (n - 1);
		number++;
	}
	return number;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int count = 0;
	printf("������a,b\n");
	scanf("%d%d", &a, &b);
	c = a ^ b;
	count = numbit(c);
	printf("��ͬ��λ��%d", count);

}*/