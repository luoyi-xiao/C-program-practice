/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N 15
void streverse(char a[N],int k)
{
	char b[N];
	int i= 0;
	for (i = 0; i < k; i++)
		b[i] = a[k - i - 1];
	b[i] = 0;
	puts(b);
}
int main()
{
	char arr[N] ;
	char *crr=&arr;
	gets(arr);
	int a = strlen(arr);
	printf("×Ö·û´®ÐòÁÐÎª:%s\n",arr);
	streverse(arr,a);
	return 0;

}*/