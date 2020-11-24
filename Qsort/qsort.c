/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int CopInt(const void* xp, const void* yp)
{
	int x = *(const int*)xp;
	int y = *(const int*)yp;
	if (x > y)
	{
		return 1;
	}
	else if (x < y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void swap(char* p, char* q, size_t num)
{
	while (num)
	{
		char tmp = *p;
		*p = *q;
		*q = tmp;
		num--;  //一个字节一个字节交换，交换后指针移向下一字节
		p++, q++;
	}
}
void my_qsort(void* base, size_t num, size_t size, int(*comp)(const void*, const void*))
{
	assert(base);
	assert(comp);
	char* p = (char*)base;//用字符指针指向数组起始地址，此后指针每+1，向后移动1字节
	//接下来进行冒泡排序
	for (int i = 0; i < num - 1; i++) //冒泡外层控制趟数，内层为单趟比较交换
	{
		int flag = 0; //标志，如果一趟后标志位没变说明本来就有序
		for (int j = 0; j < num - i - 1; j++) //进行比较交换
		{
			if (comp(p + j * size, p + (j + 1) * size) > 0)//相邻整型比较，当前大于后时
			{
				swap(p + j * size,p + (j + 1) * size, size);
				flag = 1;
			}
		}
	}
}
int main()
{
	int arr[] = { 10,9,8,7,4,5,6,1,2,3 };
	int num = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, num, sizeof(int), CopInt);
	for (int i = 0; i < num; i++)
	{
		printf("%3d", arr[i]);
	}
}*/