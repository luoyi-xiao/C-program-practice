/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int cmp1(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}

int cmp2(const void* a, const void* b) {
	return(*(char*)a - *(char*)b);
}

int cmp3(const void* a, const void* b) {
	return(*(double*)a > *(double*)b ? 1 : (-1));
}

int main()
{
	int i;
	int a[] = { 3,4,1,2,6,5 };
	char b[] = { 'c', 'b','f','d', 'a',};
	double c[] = { 1.1,1.2,1.3, 1.4 };
	qsort(a, 5, sizeof(int), &cmp1);
	qsort(b, 5, sizeof(char), &cmp2);
	qsort(c, 4, sizeof(double), &cmp3);
	for (i = 0; i < 5; i++) 
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%3c", b[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		printf("%lf\n", c[i]);
	}
}*/