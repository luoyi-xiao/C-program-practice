#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*void menu()
{
	printf("***1.play***\n");
	printf("***0.exit***\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字:");
			scanf("%d", &input);
			if (input > random_num)
			{
				printf("猜大了\n");
			}
			else if (input < random_num)
			{
				printf("猜小了\n");
			}
			else
			{
				printf("恭喜，猜中了\n");
				break;
			}
	}
}
int main()
{

	int input = 0;
	srand((unsigned)time(NULL));
	do
	{	menu();
		scanf("%d", &input);
		if (1 == input)
			game();
		else if (0 == input)
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
			break;
		}
	}while (input);
	return 0;
}*/