#define _CRT_SECURE_NO_WARNINGS 1


int is_prime(int i)
{
	int j = 0;
	for (j = 2; j <=sqrt(i) ; j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;

}

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i+=2)
	{
		if (is_prime == 1)
		{

			printf("%d", i);
		}
	
	}
	return 0;
}