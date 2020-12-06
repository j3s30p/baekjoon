#include <stdio.h>

void	eratos(int max, int *arr)
{
	int 	i, k;

	for (i = 0; i < max; i++)
		arr[i] = 1;
	for (i = 0; i < 2; i++)
		arr[i] = 0;
	for (i = 2; i < max; i++)
	{
		if (arr[i])
		{
			for (k = 2; i * k < max; k++)
				arr[i * k] = 0;
		}
	}
}

void	printPrime(int n, int *arr)
{
	int		i;
	int		min, max, diff;

	diff = 10000;
	for (i = 2; i <= n / 2; i++)
	{
		if (arr[i] && arr[n -i] &&
			n - i - i < diff)
		{
			min = i;
			max = n - i;
			diff = max - min;
		}
	}
	printf("%d %d\n",min, max);
}

int		main(void)
{
	int		i;
	int		test_case;
	int		num;
	int		arr[9974]; //10000보다 작은 가장 큰 소수 9973

	eratos(9974, arr);
	scanf("%d", &test_case);
	for (i = 0; i < test_case; i++)
	{
		scanf ("%d", &num);
		printPrime(num, arr);
	}
	return (0);
}