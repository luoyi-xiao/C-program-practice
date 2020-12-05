#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* My_strstr(const char* str1, const char*  str2)
{
	assert(str1);
	assert(str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;;//记录指向字符位置
	while (*cp)//查找次数，注意每次查找回跳
	{
		//一次查找,cp每次向后1个字符
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 &&*s1 == *s2)
		{
			s1++;
			s2++;
		}
		//留意*s2等于'\0'
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char* str1 = "abcdef";
	char* str2 = "cde";
	char* ret = My_strstr(str1, str2);
	printf("%s\n", ret);
	return 0;
}
