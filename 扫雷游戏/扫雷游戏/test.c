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
	char mine[ROWS][COLS];//�����  ��0��
	char show[ROWS][COLS];//����Ų���׵���Ϣ ��*��
	InitBoard(mine, ROWS, COLS, '0');//��ʼ��  11��11��
	InitBoard(show, ROWS, COLS, '*');//������
	////DisplayBoard(mine, ROW, COL);//��ӡ����  9��9��
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
		printf("��ѡ��:>");
		scanf("%d", &input);
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