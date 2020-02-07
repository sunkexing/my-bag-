#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, *p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	printf("%d\n", p->a);
//	printf("%d\n", (*p).a);
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}
//1. 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
	////total = money;
	////empty = money;
	//////置换
	////while (empty >= 2)
	////{
	////	total += empty / 2;
	////	empty = empty / 2 + empty % 2;
	////}
	////printf("%d\n", total);
//	if (money>0)
//	total = money * 2 - 1;
//	printf("%d\n", total);
//	return 0;
//}
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money*10;
	empty = money*10;
	while (empty > 3)
	{
		total += empty / 3;
		empty = empty / 3 + empty % 3;
	}
	printf("%d\n", total);
	return 0;
}