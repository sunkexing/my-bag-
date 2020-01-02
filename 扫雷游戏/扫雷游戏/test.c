#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"


void mune()
{
	printf("***************************\n");
	printf("**********1.play***********\n");
	printf("**********0.exit***********\n");
	printf("***************************\n");
}

void game()
{
	char mine[ROWS][COLS];//存放雷  ‘0’
	char show[ROWS][COLS];//存放排查出雷的信息 ‘*’
	InitBoard(mine, ROWS, COLS, '0');//初始化  11行11列
	InitBoard(show, ROWS, COLS, '*');//布置雷
	////DisplayBoard(mine, ROW, COL);//打印棋盘  9行9列
	////DisplayBoard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
	
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mune();
		printf("请选择:>");
		scanf("%d", &input);
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