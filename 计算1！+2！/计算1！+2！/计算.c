#define _CRT_SECURE_NO_WARNINGS 1
//����1��+2��+3��...+10!   for ѭ��
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;//for��
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}