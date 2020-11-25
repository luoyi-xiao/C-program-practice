/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void LeftMove(char* arr, int len)
{
	char tmp = arr[0];
	for (int i = 0; i < len; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[len-1] = tmp;
}
void RightMove(char* arr, int len)
{
	char tmp = arr[len-1];
	for (int i = 0; i < len; i++)
	{
		arr[i+1] = arr[i];
	}
	arr[0] = tmp;
}
int main()
{
	char arr[] = "AABCD";
	char brr[] = "ABCDA";
	char crr[] = "AABCD";
	int len = strlen(arr);
	if (strlen(arr) != strlen(brr))
	{
		printf("长度不相等，无法通过旋转得到");
		return 0;
	}
	else
	{
		printf("***判断选择方式***\n");
		printf("* 1.左旋  2.右旋 \n*");
		int number = 0;
		scanf("%d", &number);
		switch(number)
		{ case 1:
			for (int i = 0; i < len-1; i++)
			{
				LeftMove(arr, len);
				if (strcmp(arr, brr) == 0)
				{
					printf("该字符串是左旋%d个字符得到目标字符串", i+1);
					return 1;
				}
			};
			printf("无法通过左旋获得目标字符串");
			break;
		case 2:
			for (int i = 0; i < len-1; i++)
			{
				RightMove(arr, len);
				if (strcmp(crr, brr) == 0)
				{
					printf("该字符串是右旋%d个字符得到目标字符串", i+1);
					return 1;
				}
			}
			printf("无法通过右旋获得字符串");
			break;
		default:
				break;
		}
	}
	return 0;
}*/