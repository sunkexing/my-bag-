#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i=0;//ȫ�ֱ���������
void move(int n, char from, char to)
{
	printf("��%d������%d������%c---->%c\n", i++, n, from, to);  //i++    n   from-star-'A'  to-end-'C'
}
void Hanio(int n, char star, char tran, char end)
{
	if (n == 1)
	{
		move(n, star, end);
	}
	else
	{
		Hanio(n - 1, star, end, tran);// n-1��Բ�̴�'A'--->'B' 
		move(n, star, end);           //���һ��������'A'--->'C'�ݹ�
		Hanio(n - 1, tran, star, end);//ͬ�� ��n-1��Բ�̴�'B'--->'C'
	}
}
int main()
{
	int n;
	while (scanf("%d", &n) == 1 && n)//n=1,n
	{
		i = 1;
		Hanio(n,'A','B','C');
		printf("���Ĳ���Ϊ%d\n", i - 1);//����һ��Ϊ�ܲ���
	}
	return 0;
}