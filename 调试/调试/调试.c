#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
////Release版本（不会死循环）
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	getchar();
//	return 0;
//}//运行差异
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//		arr[i] = i;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0x11223344;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	getchar();*/
//	for (i = 0; i<=12; i++)
//    {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//char *strcpy(char *strDestination,const char *strSource);
//int main()
//{
//	//字符串拷贝
//	char arr1[10] = "******";
//	char arr2[] = "bit";
//	//char arr2[] = { 'b', 'i', 't' };//没放'/0'
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\n')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[10] = "******";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//最终修改1
//void my_strcpy(char* dest, char* src)
//{
//	if (dest == NULL)
//		return;
//	if (src == NULL)
//		return;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[10] = "******";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//加断言assert
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest!=NULL);//hong，断言：表达式为真，什么事不发生，为假，断言触发。能剖出问题。
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{ 
//	char arr1[10] = "******";
//	char arr2[] = "bit";
//	my_strcpy(0, arr2);//可报错
//	printf("%s\n", arr1);
//	return 0;
//}
//加const,修改最终完整版
//char *my_strcpy(char* dest, const char* src)//保护了src，程序遍不下去，出现错误，不至于崩溃。
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)//如果大意写反了就会拷反，越界崩溃。
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "******";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问，函数返回值作为另一个函数的参数
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	int val = 20;
//	//const int *p = &num;//const放在*左边，修饰*p,修饰指针，修饰指针指向内容，表示指针指向的内容不能通过指针来改变
//	int * const p=&num; //const放在*右边，修饰指针变量本身，表示指针变量的内容不能修改
//	//*p = 20;
//	p = &val;
//	printf("%d\n", num);
//	return 0;
//}
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	int arr[10] ={ "bit"};
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 1;
	int b = 2;
	int ret = add(a, b);
	printf("%d\n", ret);
	return 0;
}