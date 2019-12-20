

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
//给定k值，查找数组中k的下标
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
//			printf("找到了:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到%d\n");
//	}
//	return 0;
//}
//演示多个字符从两端移动，向中间汇聚
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
//模拟用户登录系统
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i > 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//
//	return 0;
//}

//猜字游戏！
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
//	ret = rand() % 100 + 1;//取一个1-100随机数
//	//printf("%d\n", ret);
//	while (1)//死循环
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess!=%d)
//		{
//			printf("输入有误，游戏退出");
//		}
//
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;//跳出死循环，游戏结束
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
//关机程序
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("stutdown -s -t 60");
//	while (1)
//	{
//		printf("你的电脑将在一分钟平后关机，如果输入：我是猪，就取消关机！\n 请输入:>");
//			scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}