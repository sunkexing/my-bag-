#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int y)
{
	
	return((y % 4 == 0) && (y % 10 != 0) || (y % 400 == 0));
}
int main()
{
	
	int year = 0;
	for (year = 1000; year<= 2000; year++)
	{
		if (is_leap_year(year)==1)
		{
			printf("%d\n", year);
		}
	}
	return 0;
}