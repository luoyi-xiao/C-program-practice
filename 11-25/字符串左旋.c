/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void LeftMove(char* arr, int len)
{
	char tmp = arr[0];
	for (int i = 0; i < len; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "AABCD";
	int len = strlen(arr);
	int num = 0;
	printf("%s\n",arr);
	printf("请输入需要左旋多少个字符\n");
	scanf("%d", &num);
	while (num)
	{
		LeftMove(arr, len);
		num--;
	}
	printf("%s", arr);
	return 0;
}*/