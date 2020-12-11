/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* My_strncpy(char* dst, const char* source, size_t num)
{
	assert(source);
	assert(dst);
	char* p = dst;
	while (num--)
	{
		if(*source!='\0')
		{
			*p = *source;
			p++;
			source++;
		}
		else {
			*p = '\0';
		}

	}
	return dst;

}
int main()
{
	char arr[16] = "hello ";
	char* brr = "world!";
	int n = 0;
	scanf("%d", &n);
	My_strncpy(arr, brr, n);
	printf("%s", arr);
}*/