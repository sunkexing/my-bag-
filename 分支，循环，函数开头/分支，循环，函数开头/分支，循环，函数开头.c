

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//continue;
//			break;
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//����kֵ������������k���±�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz - 1;
//	
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
//			printf("�ҵ���:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���%d\n");
//	}
//	return 0;
//}
//��ʾ����ַ��������ƶ������м���
//#include<string.h>
//#include<windows.h>
//int main()
//{
//		
//	char arr1[] = {"welcom to bit!!!" };
//	char arr2[] = { "################" };
//	int left = 0;
//	int right = strlen(arr1 - 1);
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//ģ���û���¼ϵͳ
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i > 3)
//	{
//		printf("������������˳�����\n");
//	}
//
//	return 0;
//}

//������Ϸ��
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("****************\n");
//	printf("*****1.play*****\n");
//	printf("*****0.exit*****\n");
//	printf("****************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//ȡһ��1-100�����
//	//printf("%d\n", ret);
//	while (1)//��ѭ��
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess!=%d)
//		{
//			printf("����������Ϸ�˳�");
//		}
//
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;//������ѭ������Ϸ����
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
//�ػ�����
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("stutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ��Խ���һ����ƽ��ػ���������룺��������ȡ���ػ���\n ������:>");
//			scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}