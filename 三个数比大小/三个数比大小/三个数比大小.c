#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void swap(int*p,int*l)
{
	int tem = *p;
	*p = *l;
	*l = tem;

}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		swap(&a, &b);
	}
	if (a>c)
	{
		swap(&a, &c);
	}
	if (b > c)
	{
		swap(&b, &c);
	}
	printf("small to big:%d%d%d\n", a, b, c);
    return 0;
}