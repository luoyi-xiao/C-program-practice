/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void run(int year)
{
	int flag = 0;
	if ((year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0))
		flag = 1;
	if (flag == 1)
		printf("%d������\n", year);
	else
		printf("%d��������\n", year);
}
int main()
{
	int year = 0;
	while (1)
	{
		printf("��������Ҫ�жϵ����\n");
		scanf("%d", &year);
		run(year);
	}
	return 0;
}*/