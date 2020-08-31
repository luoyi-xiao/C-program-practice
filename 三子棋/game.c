#include"game.h"
#define _CRT_SECURE_NO_WARNINGS 1
//自己创建的头文件用双引号来引用
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘,一个空格一个|再在下面一横
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割的横线
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	
	while (1)
	{	
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char PlayerWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//行判断胜负
	for (i = 0; i < row; i++)
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				count++;
		}
		if (count == row == col)
			return	'P';
	}
	//列判断胜负
	for (i = 0; i < col; i++)
	{
		count = 0;
		for (j = 0; j < row; j++)
		{
			if (board[j][i] == '*')
				count++;
		}
		if (count == row == col)
			return	'P';
	}
	//对角线判断胜负
	for (i = 0; i < col; i++)
	{
		count = 0;
		if (board[i][i] == '*')
			count++;
		if (count == row == col)
		return	'P';
	};
}
char ComputerWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//行判断胜负
	for (i = 0; i < row; i++)
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '#')
				count++;
		}
		if (count == row == col)
			return	'C';
	}
	//列判断胜负
	for (i = 0; i < col; i++)
	{
		count = 0;
		for (j = 0; j < row; j++)
		{
			if (board[j][i] == '#')
				count++;
		}
		if (count == row == col)
			return	'C';
	}
	//对角线判断胜负
	for (i = 0; i < row; i++)
	{
		count = 0;
		if (board[i][i] == '#')
			count++;
		if (count == row == col)
			return	'C';
	};
}
char Isfull(char board[ROW][COL], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
				count++;
		}
	}		
	if (count == (row* col))
			return	'F';
}