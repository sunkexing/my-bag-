//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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


//void main()
//{
//	int i, j, arr[10][10];
//	for (i = 0; i<10; i++)
//	for (j = 0; j<10; j++)
//		arr[i][j] = i*j;
//	for (i = 0; i<10; i++)
//	for (j = 1; j <= i; j++)
//		printf("%d*%d=%d\n", i, j, i*j);
//}

//int  main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d",i*j,i,j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int MAX = arr[0];
//  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    for (i = 1; i <10  ; i++)
//	{
//		if (arr[i] > MAX)
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("最大的数:%d", MAX);
//    return 0;
//}

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