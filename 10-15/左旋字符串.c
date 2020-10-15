#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
void leftmove(char *str,int len ,int n)
{
	int i = 0;
	int k = n % len;
	while (k--)
	{
		char tmp = *str;
		for (i = 0; i < len - 1; i++)
			*(str+i) = *(str + i + 1);
		*(str+len-1) = tmp;
	}
}
int main()
{
	char a[] = { "ABCD" };
	int len = strlen(a);
	int n = 0;
	printf("ÊäÈëÕýÊý¸ö×óÐý×Ö·û\n");
	scanf("%d",&n);
	printf("×óÐý%d¸ö×Ö·û\n",n);
	leftmove(a, len, n);
	printf("%s", a);
	return 0;
}