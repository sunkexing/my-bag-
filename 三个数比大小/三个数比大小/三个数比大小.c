#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		t = a;
		a = b;
		b = t;

	}
	if (a>c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;


	}
	printf("small to big:%d%d%d\n", a, b, c);

	return 0;

}