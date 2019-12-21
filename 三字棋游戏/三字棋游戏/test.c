#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("*****************\n");
	printf("*****1.play******\n");
	printf("*****0.exit******\n");
	printf("*****************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	char ret=0;
	Initboard(board, ROW, COL);//初始化棋盘
	Displayboard(board, ROW, COL);//打印棋盘
	
	while (1)//循环 开始游戏
	{
		PlayerMove(board, ROW, COL);//玩家先走
		Displayboard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑走
		Displayboard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		{
			printf("玩家赢\n");
		}
	else if(ret == '#')
		{
			printf("电脑赢\n");
		}
	else if (ret == 'Q')
		{
			printf("平局\n");
		}
	}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机值（利用时间戳）
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} 
	while (input);
}

int main()
{
	test();
	return 0;
}

