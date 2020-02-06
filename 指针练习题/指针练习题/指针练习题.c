#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
////写一个函数打印arr数组的内容，使用数组下标
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	while (p <= &arr[9])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;//改低地址
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////写一个函数，可以逆序一个字符串。
//while循环
//void  Reverse(char*arr)
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	Reverse(str);
//	printf("%s\n", str);
//	return 0;
//}
//for循环
//void Reverse(char*arr)
//{
//	int i = 0;
//	int sz = strlen(arr);
//	for (i = 0; i < sz / 2; i++)
//	{
//		char a = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = a;
//	}
//}
//int main()
//{
//	char str[] = "hello bit";
//	Reverse(str);
//	printf("%s/n", str);
//	return 0;
//}
//结果输出多少   
//int main()
//{ 
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//图案题

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i <line ; i++)
//	{
//		//打印一行
//		//打印前面的空格
//		int j = 0;
//		for (j = 0; j <line-i-1 ; j++)
//		{
//			printf(" ");
//		}
//		//打印‘*’
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i <line-1 ; i++)
//	{
//		//打印前面的空格
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//i是几位数
//		int n = 1;
//		double sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//i的每位数次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//判断是否为水仙花数
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//	scanf("%d%d", &a,&n);
//	for (i = 0; i <n;i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
