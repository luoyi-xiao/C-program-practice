/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void _Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}

}
int cmp_int(const void* e1,const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
void qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				_Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
			printf("%d ", arr[i]);
	}		
	printf("\n");
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	print_arr(arr, sz);
}*/