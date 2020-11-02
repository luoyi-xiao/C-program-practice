/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)//size_t countÊÇ×Ö½ÚÊý
{
	void* ret = dest;
	assert(dest);
	assert(src);
	if(dest<src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char* )src + count);
		}
	}
}
int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9};
	my_memmove(arr1+2, arr1, 8);
}*/