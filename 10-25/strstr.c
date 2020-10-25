/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1);
	assert(str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	if (*s2 == '\0')
	{
		return(char*)str1;
	}
	while (*cp)
	{
		//一次查找的过程
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char* str1 = "abcdef";
	char* str2 = "cde";
	char* ret = my_strstr(str1, str2);
	printf("%s\n", ret);
	return 0;
}*/