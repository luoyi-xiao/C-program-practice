#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("**************************\n");
	printf("****1.add    2.del********\n");
	printf("****3.search 4.modify*****\n");
	printf("****5.sort   6.show ******\n");
	printf("******0.exit**************\n");
	printf("**************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};
void test()
{
	Contact con = { 0 };
	int sz = 0;//有效数据数
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_contact(&con);
			break;
		case DEL:
			del_contact(&con);
			break;	
		case SORT:
			sort_contact(&con);
			break;
		case SEARCH:
			search_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case SHOW:
			show_contact(&con);
			break;
		case EXIT:
			printf("退出通讯录");
			break;
		default:
			printf("请选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;

}