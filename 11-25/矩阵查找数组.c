#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define row 3
#define bow 3
int main()
{
	int arr[row][bow] = { 1,2,3,4,5,6,7,8,9 };
	printf("������Ҫ�ھ����в��ҵ�����\n");
	int num = 0;
	scanf("%d", &num);
	if (arr[0][0] > num) //��һ��Ԫ������С�ģ�����Ѿ�С����С�ģ���϶�������
	{
		printf("�����в����ڸ���");
		return 0;
	}
	else if (arr[row - 1][bow - 1] < num)
	{
		printf("�����в����ڸ���");
		return 0;
	}
	else 
	{
		int flag = 0;
		int i = 0;
		if (arr[row - 1][0] < num)
		{
			for ( i = 0; i < bow; i++)
			{
				if (arr[row][i] == num)
					flag = 1;
			}
		}
		else
		{
			for (i = 0; i < row - 1; i++)
			{
				if (arr[i][0] < num);
				{
					for (int j = 0; j < bow; j++)
					{
						if (arr[i][j] == num)
							flag = 1;
					}
				}
			}
		}
		if (flag == 1)
		{
			printf("���ڸ���");
		}
	}
	return 0;
}