#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"//���Լ�������ֻ��Ҫ˫����
#include<time.h>
void  menu()
{
		printf("*********\n");
		printf("**1.play**\n**0.exit**\n");
		printf("*********");
}
void game()
{
	//���һ����������Ϸ
	//�洢����
	char board[ROW][COL] = { 0 };
	char w = 0;
	char g = 0;
	char f = 0;
	InitBoard(board, ROW, COL);//���̳�ʼ��-�ո�
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		w=PlayerWin(board,ROW,COL);
		if (w=='P')
		{
			printf("���Ӯ\n");
			break;
		};
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);	
		f=Isfull(board, ROW, COL);
		if (f == 'F')
		{
			printf("������ƽ��\n");
			break;
		};
		g=ComputerWin(board,ROW,COL);
		if (g == 'C')
		{
			printf("����Ӯ\n");
			break;
		};
	
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("***��������Ϸ***\n");
	printf("���ִ�ӣ�*������ִ�ӣ�#\n");
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
		default:
			printf("ѡ�����,���������룡����\n\n");
				break;
		}
	} while (input);
		return 0;
}