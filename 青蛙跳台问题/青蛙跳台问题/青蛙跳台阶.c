#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һ��1�ף�2�ף�����n�׵�����
int fib(int i)
{
	if (i == 1)
	{
		return 1;
	}
	else if (i == 2)
	{
		return 2;
	}
	else if (i > 2)
	{
		return fib(i - 1) + fib(i - 2);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",fib(n));
	return 0;
}
//һ��1�ף�2�ף�3��...n�ף�����n�׵�����


