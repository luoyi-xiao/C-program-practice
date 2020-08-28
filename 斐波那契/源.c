/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib(int n)
{
	if (n<3)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) +Fib(n - 2);
	}
}
int main()
{
	int num = 0;
	int result=0;
	scanf("%d", &num);// C4996, C6031 return value ignored
	result = Fib(num);
	printf("输出结果为%d", result);
}
递归实现K的n次房
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
Fib(int n, int k)
{
	if (k<1)
		return 1;
	else
		return n * Fib(n ,k - 1);
}
int main()
{
int num = 0;
int count = 0;
int result = 0;
scanf("%d%d", &num,&count);
result = Fib(num,count);
printf("输出结果为%d", result);
}*/
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int a = 0;
int DigitSum(int n)
{
	if (n > 9)
		DigitSum(n / 10);
	return (a += n%10);
}
int main()
{
	int num = 0;
	int result = 0;
	scanf("%d", &num);
	result = DigitSum(num);
	printf("输出结果为%d", result);
}
*/
//不使用字符串函数实现字符串逆序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int len(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	char tmp=arr[0];
	int length = len(arr);
	arr[0] = arr[length-1];
	arr[length - 1] = '\0';
	if(len(arr+1)>1)
	{
		reverse_string(arr+1);	
	}
	arr[length-1] = tmp;
}
int main()
{
	char arry[20]="";
	int i = 0;
	scanf("%s", arry);
	len(arry);
	reverse_string(arry);
	printf("逆序输出为：%s", arry);
}