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
	Initboard(board, ROW, COL);//��ʼ������
	Displayboard(board, ROW, COL);//��ӡ����
	
	while (1)//ѭ�� ��ʼ��Ϸ
	{
		PlayerMove(board, ROW, COL);//�������
		Displayboard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//������
		Displayboard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		{
			printf("���Ӯ\n");
		}
	else if(ret == '#')
		{
			printf("����Ӯ\n");
		}
	else if (ret == 'Q')
		{
			printf("ƽ��\n");
		}
	}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�������ֵ������ʱ�����
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
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

