#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//ȷ������
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;//һ���ڵıȽ�
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
// ������A�е����ݺ�����B�е����ݽ��н���������һ����
//void swap(int arr1[],int arr2[],int  n)
//{
//	int i; 
//	for (i = 0; i < n; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arrA[] = { 1,2,3,4,5};
//	int arrB[] = { 5,4,3,2,1};
//	int sz = sizeof (arrA) / sizeof (arrA[0]);
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d", arrA[i]);
//	}
//	printf("\n" );
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arrB[i]);
//	}
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ��� init() ��ʼ������Ϊȫ0
//ʵ�� print()  ��ӡ�����ÿ��Ԫ��
//ʵ�� reverse()   �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void  Init(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof arr / sizeof arr[0];
//	Init(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//void  print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,4,5,8,0 };
//	int sz = sizeof arr / sizeof arr[0];
//	print(arr, sz);
//	return 0;
//}
//
//void  reverse(int arr[], int sz)
//{
//	int i;
//	int j = sz - 1;
//	for (i = 0; i < j; i++,j--)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof arr / sizeof arr[0];
//	reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}