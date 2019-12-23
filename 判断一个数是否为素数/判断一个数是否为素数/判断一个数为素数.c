#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//100-200之间的素数
//int main()
//{
//  int a = 0;
//  int b = 0;
//  for (a = 100; a <= 200; a++)
//  {
//	  for (b = 2; b < a; b++)
//	  {
//		  if (a%b == 0)
//			  break;
//	  }
//	  if (b == a)
//      printf("%d\n", a);
//   }
//  return 0;
//}
//输入一个数，判断是否为素数

//int main()
//{
//	int i,j,k;
//	printf("请输入一个正整数\n");
//	scanf("%d", &i);
	//j = (int)sqrt(i);
	//for (k = 2; k <= j; k++)
	//{
	//	if (i%k == 0)
	//		break;
	//}
	//if (k > j)
	//{
	//	printf("是素数\n");
	//}
	//else
	//	printf("不是素数\n");
//	return 0;
//}
//int Is(int i)
//{
//	int j,k;
//	j = (int)sqrt(i);
//	for (k = 2; k <= j; k++)
//	{
//		if (i%k == 0)
//			break;
//	}
//	if (k > j)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	if(Is (i)==1)
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}