#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

//加各位数字之和

//int  DigitSum(int x)
//{
//	int sum = 0;
//	int y = 0;
//	if (x>0)
//	{
//		y= x % 10;
//		x = x / 10;
//		sum = y+DigitSum(x);//逻辑很重要  我想到！！想出来！
//	}
//	return sum;
//}
//
//int main()
//{
//	 int n ;
//	scanf("%d", &n);
//	printf("sum=%d\n", DigitSum(n));
//	return 0;
//}
//int DigitSum(int n)
//{
//	int sum = 0;
//	int m = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//int main()
//{
//	int a;
//	printf("输入一个整数:\n");
//	scanf("%d", &a);
//	printf("Sum= %d\n", DigitSum(a));
//	system("pause");
//	return 0;
//}
//字符反向排列
//void reverse_string(char * string)
//{
//	if (*string == '\0')
//	{
//		return 0;
//	}
//	reverse_string(string + 1);
//	printf("%c", *string);
//}
//
//int main()
//{
//	char *arr = "12345";
//	reverse_string(arr);
//	return 0;
//}
//
