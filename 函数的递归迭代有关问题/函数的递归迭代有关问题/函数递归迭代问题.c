#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int Fun(int n) //����
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
//����������������
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

//дһ������ʵ��һ��������������Ķ��ֲ���
//
//int brinary_search(int*arr[], int k, int sz)//���Ҷ�����
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	
//
//	return 0;
//}
//ÿ����һ�δ˺�����numֵ��1
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
//������Ƕ�׵���
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

//��������ʽ����  ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
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
//		print(n / 10);//�Լ������Լ�
//	}
//	printf("%d\t", n % 10);//���еĵ�������������� ��ʼ��ӡ
//}
//int main() 
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//strlen����д��
//int my_strlen(char*str)
//{
//	int count = 0;//���ڼ���
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����++���൱�ڶ�ȡ��һλ��ַ
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

//strlen�ݹ�д��(���ܴ����������)
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
//n�Ľ׳˳��棨�����������
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

////n�Ľ׳˵ݹ�
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
	//���n���Ʋ��������У��õݹ鷴�����ӣ�
//int count = 0;//����ȫ�ֱ���count ���ٻ��������� 
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
//�ǵݹ���ʽ
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
//�˷��ھ�

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
//	printf("������n��ֵ:\n");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//��η�
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
//����һ����������˳��������λ����
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