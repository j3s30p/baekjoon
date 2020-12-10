#include <stdio.h>
#include <stdlib.h>

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

int		main(void)
{
	int		*arr;
	int		min, max;
	int		sum;

	max = (123456 * 2) + 1;
	arr = (int *)malloc(sizeof(int) * max);
	eratos(max, arr);
	while (1)
	{
		scanf("%d", &min);
		if (min == 0)
			break;
		sum = 0;
		max = 2 * min;
		min++;
		while (min <= max)
		{
			if (arr[min])
				sum++;
			min++;
		}
		printf("%d\n", sum);
	}
	free(arr);
	return (0);
}

//123456 ~ 123456 * 2 (최대값)
//타임 아웃 때문에 에라토스테네스의 체 사용.