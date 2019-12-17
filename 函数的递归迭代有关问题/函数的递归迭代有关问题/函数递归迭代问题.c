#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int Fun(int n) //例子
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int n = Fun(2);
//	printf("%d\n", n);
//	return 0;
//}
//交换两个给定的数
//void swap2(int *p1, int *p2)
//{
//	int tmp ;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1=%d,num2=%d\n", num1, num2);
//    swap2(&num1,&num2);
//	printf("num1=%d,num2=%d\n", num1, num2);
//    return 0;
//
//}
//void swap(int *a,int *b)
//{
//	int md;
//	md = *a;
//	*a = *b;
//	*b = md;
//}
//int main()
//{
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	swap(&num1,&num2);
//	printf("%d %d", num1, num2);
//	return 0;
//}

//写一个函数实现一个整理有序数组的二分查找
//
//int brinary_search(int*arr[], int k, int sz)//查找二进制
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = 5;
//	int ret = brinary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	
//
//	return 0;
//}
//每调用一次此函数，num值加1
//int Add(int*p)
//
//{
//	(*p)++;
//
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//函数的嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//函数的链式访问  把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	
//		printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//
//}
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//自己调用自己
//	}
//	printf("%d\t", n % 10);//所有的调用完后，满足条件 开始打印
//}
//int main() 
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//strlen常规写法
//int my_strlen(char*str)
//{
//	int count = 0;//用于计数
//	while (*str != '\0')
//	{
//		count++;
//		str++;//数组++，相当于读取下一位地址
//
//	}
//	return count;
//		
//}
//
//int main()
//{
//	char arr[] = "hello,bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strlen递归写法(不能创建常规变量)
//int my_stren(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_stren(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_stren(arr);
//	printf("%d\n", len);
//	return 0;
//}
//n的阶乘常规（不考虑溢出）
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

////n的阶乘递归
//int Fac(n)
//{ 
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//
//}
	//求第n个菲波那切数列（用递归反而复杂）
//int count = 0;//引入全局变量count 减少机器运算量 
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//int main()
//{
//    int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}
//非递归形式
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//乘法口诀

//int print(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//int main()
//{ 
//	int n = 0;
//	printf("请输入n的值:\n");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//求次方
//int Fac(n, k)
//{
//	int mac ;
//	if (k == 0)
//	{
//		mac = 1;
//	}
//	else
//	{
//	    mac = n*Fac(n, k-1);
//	}
//	return mac;
//}
//int main()
//{
//	printf("%d\n",Fac(3, 2));
//	return 0;
//}
//输入一个整数，按顺序输出其各位数字
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}