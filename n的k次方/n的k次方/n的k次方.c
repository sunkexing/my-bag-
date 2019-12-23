#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//float Sk(int n, int m)
//{
//	if (m > 0)
//	{
//		return n*Sk(n, m - 1);
//	}
//	else if (m == 0)
//		return 1;
//	else
//	{
//		return 1.0/(n*Sk(n, -m));
//	}
//}
//int main()
//{
//	int i, j;
//	float ret;
//	scanf("%d%d", &i, &j);
//	ret=Sk(i, j);
//	printf("%lf", ret);
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char * string)
//{
//	if (*string == '\0')
//	{
//		return 0;
//	}
//	reverse_string(string + 1);
//	printf("%c", *string);
//}
//int main()
//{
//	char *arr = "12345";
//	reverse_string(arr);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}