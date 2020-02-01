#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
//	int a = 0x11223344;//四个字节
//	//int *pa=&a;
//	//*pa=0;//访问四个字节
//	char *pa = &a;
//	*pa = 0;//访问一个字节
//	//指针类型决定对指针解引用有多大权限
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//指针类型第二个意义，指针+/- 1决定什么字节，即向前/向后移动多大距离
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char*pa = (char*)&a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pa = 'x';
//		pa++;
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}
////strlen的第三种实现方法
//int my_strlen(char*str)
//{
//	char*start = str;
//	//while (*str != '\0')
//	//{
//	//	str++;
//	//}
//	while (*str++ != '\0');
//	return str - start - 1;
//	//return str - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//用指针形式找出数组元素
//int main()
//{
//	int arr[] = { 1, 2, 4, 3, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	while (p <= &arr[9])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int a =10;
//	int *pa = &a;
//	int **ppa = &pa;
//	printf("%d\n", **ppa);
//	return 0;
//}
//int main()
//{
//	int arr1[5];
//	char arr2[6];
//	char*arr3[4] = { 0 };
//	printf("%d\n", sizeof(arr3));
//	return 0;
//}
//int main()
//{
//	char*arr3[4] = { "abcdef", "bit", "hehe", "xiaoqiang" };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr3[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int *arr[4] = { &a, &b };
//	printf("%d\n", *(arr[0]));
//	printf("%d\n", *(arr[1]));
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	int a = 10;
//	struct stu S;
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//	struct Point p;
//};
//int main()
//{
//	struct S s = { "张三", 20, 65.5, { 3, 5 } };
//	return 0;
//}
//struct Point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//	struct Point P;
//};
//int main()
//{
//	struct S s = { "张三", 20, 65.5, { 3, 5 } };
//	printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.P.x, s.P.y);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//	struct Point p;
//};
////void Print1(struct S s)
////{
////	printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
////}
//void Print2(struct S* ps)
//{
//	printf("%s %d %lf %d %d\n", ps->name, ps->age, ps->score, ps->p.x, ps->p.y);
//	
//}
//int main()
//{
//	struct S s = { "张三", 20, 65.5, { 3, 5 } };
//	/*Print1(s);*/
//	Print2(&s);
//	return 0;
//}
