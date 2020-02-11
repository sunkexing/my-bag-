#define _CRT_SECURE_NO_WARNINGS 1
//调整数组使奇数全部都位于偶数前面。题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
void my_sort(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left<right)  &&  (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left<right)  &&  (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void my_print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_sort(arr, sz);
	my_print(arr, sz);
	return 0;
}