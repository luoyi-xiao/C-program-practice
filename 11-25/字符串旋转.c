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
		printf("���Ȳ���ȣ��޷�ͨ����ת�õ�");
		return 0;
	}
	else
	{
		printf("***�ж�ѡ��ʽ***\n");
		printf("* 1.����  2.���� \n*");
		int number = 0;
		scanf("%d", &number);
		switch(number)
		{ case 1:
			for (int i = 0; i < len-1; i++)
			{
				LeftMove(arr, len);
				if (strcmp(arr, brr) == 0)
				{
					printf("���ַ���������%d���ַ��õ�Ŀ���ַ���", i+1);
					return 1;
				}
			};
			printf("�޷�ͨ���������Ŀ���ַ���");
			break;
		case 2:
			for (int i = 0; i < len-1; i++)
			{
				RightMove(arr, len);
				if (strcmp(crr, brr) == 0)
				{
					printf("���ַ���������%d���ַ��õ�Ŀ���ַ���", i+1);
					return 1;
				}
			}
			printf("�޷�ͨ����������ַ���");
			break;
		default:
				break;
		}
	}
	return 0;
}*/