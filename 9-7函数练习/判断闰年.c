/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void run(int year)
{
	int flag = 0;
	if ((year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0))
		flag = 1;
	if (flag == 1)
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", year);
}
int main()
{
	int year = 0;
	while (1)
	{
		printf("请输入需要判断的年份\n");
		scanf("%d", &year);
		run(year);
	}
	return 0;
}*/