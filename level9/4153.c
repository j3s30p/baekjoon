#include <stdio.h>

void	bubbleSort(long long *arr, int n)
{
	int		i, k;
	int		box;

	for (i = n - 1; i > 0 ; i--)
	{
		for (k = 0; k < i; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				box = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = box;
			}
		}
	}
}

int		main(void)
{
	long long	arr[3];
	
	while (1)
	{
		scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
		if (!arr[0] && !arr[1] && !arr[2])
			break;
		bubbleSort(arr, 3);
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			printf("right\n");
		else
			printf("wrong\n");
	}
	return (0);
}