#include <stdio.h>
#include <stdlib.h>

int		b_range(int n)
{
	int i = 0;

	for (; n > 0; i++)
		n /= 10;
	return (i);
}

int		pow_10(int n)
{
	int box = 1;

	for (; n > 0; n--)
		box *= 10;
	return (box);
}

int		main(void)
{
	unsigned int a, b, result = 0;
	int	i, b_len, *b_arr;

	scanf("%d", &a);
	scanf("%d", &b);
	b_len = b_range(b);
	b_arr = (int *)malloc(sizeof(int) * (b_len + 1));
	for (i = 0; i < b_len; i++)
		b_arr[i] = (b - ((b / pow_10(i + 1)) * pow_10(i + 1))) / pow_10(i);
	for (i = 0; i < b_len; i++)
	{
		printf("%d \n", a * b_arr[i]);
		result += (a * b_arr[i]) * pow_10(i);
	}
	printf("%d", result);
	free (b_arr);
	return (0);
}