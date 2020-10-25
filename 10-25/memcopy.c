/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t count)//size_t count是字节数
{
	void* ret = dest;
	assert(dest);
	assert(src);
	while (count--)
	{
		//一个一个字节拷贝
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
void print(int* p)
{
	while (*p!=NULL)
	{
		printf("%d", *p);
		p++;
	}
}
int main()
{
	int arr1[] = {1,2,3,0,4,5};
	int arr2[10] = {0};
	int i = 0;
	my_memcpy(arr2, arr1, 8);
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr2[i]);
	}
}*/