#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#define ROW 2
#define COL 3
int My_search(int p[ROW][COL], int r,int c, int n)
{
	int x= 0;
	int y = 0;
	int flag = 0;
	for (x = 0; x < r; x++)
		for (y = 0; y < c; y++)
		{
			if (p[x][y] == n)
				flag++;
		}
	return flag;
}

int main()
{
	int arr[ROW][COL] = { {1,2,3}, {3,2,5} };
	for(int i=0;i<ROW;i++)
		for (int j = 0; j < COL; j++) {
			int reg=My_search(arr, ROW, COL, arr[i][j]);
			if (reg == 1)
			{
				printf("找到单身数%d\n", arr[i][j]);
			}

		}
	return 0;
}