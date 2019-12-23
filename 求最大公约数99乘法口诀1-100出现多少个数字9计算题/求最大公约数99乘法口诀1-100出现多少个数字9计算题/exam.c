//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求最大公约数
//int main()
//{
//	int a, b, num1, num2, temp;
//	scanf("%d%d", &num1, &num2);
//	a = num1; b = num2;
//	while (b != 0)
//	{
//		temp = a%b;
//		a = b;
//		b = temp;
//	}
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	while (a%b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//乘法口诀表
//随意几乘几
//int main()
//{
//	int n=0;
//	scanf_s("%d", &n);
//	int i=0;
//	for (i = 1; i <= n; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\n", i*j, i, j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//9*9
//int  main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//十个整数最大值

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//为什么不用int max=0; 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//}
//1-100出现的数字9
//int main()
//  {
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//int main()
//{
//	float a = 1.0;
//	int b = 1;
//	float sum = 0.0;
//	for (a = 1; a <= 100; a++)
//	{
//		sum = sum + b*(1.0 / a);
//		b = -b;
//	}
//	printf("sum is %f\n", sum);
//	return 0;
//}