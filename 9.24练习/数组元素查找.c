#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int search(int* arry, int n,int m)
{
	int left = 0;
	int right = m;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arry[mid] > n)
		{
			right = mid - 1;
		}
		else if (arry[mid] < n)
		{
			left = mid + 1;
		}
		else
			return 0;
	}
	return -1;
}
int main()
{
	int arr[6] = {11,22,33,44,55,66};
	int input = 0;
	int flag = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	do
	{	printf("请输入需要查找的数字\n");
		scanf("%d", &input);
		flag=search(arr, input,sz);
		if (flag == 0)
			printf("找到了\n");
		else
			printf("找不到\n");
	} while (input);
	return 0;
}