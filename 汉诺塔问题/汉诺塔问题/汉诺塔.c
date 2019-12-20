#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i=0;//全局变量，步数
void move(int n, char from, char to)
{
	printf("第%d步，将%d号盘子%c---->%c\n", i++, n, from, to);  //i++    n   from-star-'A'  to-end-'C'
}
void Hanio(int n, char star, char tran, char end)
{
	if (n == 1)
	{
		move(n, star, end);
	}
	else
	{
		Hanio(n - 1, star, end, tran);// n-1个圆盘从'A'--->'B' 
		move(n, star, end);           //最后一个大盘子'A'--->'C'递归
		Hanio(n - 1, tran, star, end);//同理， 将n-1个圆盘从'B'--->'C'
	}
}
int main()
{
	int n;
	while (scanf("%d", &n) == 1 && n)//n=1,n
	{
		i = 1;
		Hanio(n,'A','B','C');
		printf("最后的步数为%d\n", i - 1);//最后减一即为总步数
	}
	return 0;
}