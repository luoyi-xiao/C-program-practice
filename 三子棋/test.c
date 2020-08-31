#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"//在自己创建的只需要双引号
#include<time.h>
void  menu()
{
		printf("*********\n");
		printf("**1.play**\n**0.exit**\n");
		printf("*********");
}
void game()
{
	//设计一下三子棋游戏
	//存储数据
	char board[ROW][COL] = { 0 };
	char w = 0;
	char g = 0;
	char f = 0;
	InitBoard(board, ROW, COL);//棋盘初始化-空格
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		w=PlayerWin(board,ROW,COL);
		if (w=='P')
		{
			printf("玩家赢\n");
			break;
		};
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);	
		f=Isfull(board, ROW, COL);
		if (f == 'F')
		{
			printf("棋满，平局\n");
			break;
		};
		g=ComputerWin(board,ROW,COL);
		if (g == 'C')
		{
			printf("电脑赢\n");
			break;
		};
	
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("***三子棋游戏***\n");
	printf("玩家执子：*；电脑执子：#\n");
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("选择错误,请重新输入！！！\n\n");
				break;
		}
	} while (input);
		return 0;
}