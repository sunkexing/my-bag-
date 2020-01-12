#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int a = -1;
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
	/*a = a +b;
	b = a - b;
	a = a - b;*/
	/*a = a^b;
	b = a^b;
	a = a^b;*/
	//c = a; 
	//a = b;
	//b = c;

//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one_bit(a);
//	printf("ret=%d", ret);
//	return 0;
//}
//int count_one_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one_bit(a);
//	printf("ret=%d", ret);
//	return 0;
//}
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	int ret = count_one_bit(a);
//	printf("ret=%d", ret);
//	return 0;
//}
//int main()
//{
//	int flag = 0;
//	if (flag)
//	{
//	}
//	if (!flag)
//	{
//
//	}
//}//布尔类型

//int main()
//{
//	int a = 10;
//	short s = 3;
//	printf("%d\n", sizeof(s = a + 3));//不做运算 先遇到s  求sizeof（s）
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	a &= (~ (1 << (3 - 1)));//00001111->00001011
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//解引用
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;//有一个假，都是假
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//	//i=a++||++b||d++;//有一个真，都是真
//	//printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
//	arr[4] = 6;
//	printf("%d\n", arr[4]);
//	return 0;
//}
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu s = { "张三", 20 };
//	printf("%s %d\n", s.name, s.age);
//	return 0;
//}
////整形提升
//int main()
//{
//	char a = 127;
//	char b = 3;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}//c不需要整形提升

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//表达式---整形提升
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//3. 获取一个整数二进制序列中所有的偶数位和奇数位。要求：分别打印出二进制序列

//int main()
//{
//	int a = 13;
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d ", ((a >> i) & 1));//奇数位
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));//偶数位
//	}
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？输入例子 :1999 2299输出例子 : 7
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int count_diff_bit(int a, int b)
//{
//	int tmp = a^b;
//	int count = count_one_bit(tmp);
//}
//int mian()
//{
//	int a = 1999;
//	int b = 2299;
//	int count = count_diff_bit(a, b);
//	printf("%d\n", count);
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	int ret = sizeof(a);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}