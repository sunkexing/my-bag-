#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
////дһ��������ӡarr��������ݣ�ʹ�������±�
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
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
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
//	int a = 0x11223344;//�ĵ͵�ַ
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
////дһ����������������һ���ַ�����
//whileѭ��
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
//	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
//	Reverse(str);
//	printf("%s\n", str);
//	return 0;
//}
//forѭ��
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
//����������   
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
//ͼ����

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0; i <line ; i++)
//	{
//		//��ӡһ��
//		//��ӡǰ��Ŀո�
//		int j = 0;
//		for (j = 0; j <line-i-1 ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ��*��
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i <line-1 ; i++)
//	{
//		//��ӡǰ��Ŀո�
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//i�Ǽ�λ��
//		int n = 1;
//		double sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//i��ÿλ���η���
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
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
