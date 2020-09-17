/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int Sad(int i)
{
	int k = 0;
	int sum = 0;
	int j = 0;
	for (k = 0; k < 5; k++)
	{
		j+= i * pow(10,k);
		sum += j;
	}
	return sum;
}
int main()
{
	int a = 0;
	int c = 0;
	printf("ÇëÊäÈëaÖµ£º\n");
	scanf("%d", &a);
	c = Sad(a);
	printf("Sn=%d", c);
	return 0;
}*/