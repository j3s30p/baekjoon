#include <stdio.h>
#include <stdlib.h>

int		pow10(int n)
{
	int		i;
	int		rslt = 1;

	while (n)
	{
		rslt *= 10;
		n--;
	}
	return (rslt);
}

int		checkDigit(int n)
{
	int		i = 0;

	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	makeArr(int *arr, int num, int digit)
{
	int 	i;
	int		max;

	max = digit - 1;
	for (i = 0; i < digit; i++)
	{
		arr[i] = num / pow10(max);
		num -= (num / pow10(max)) * pow10(max);
		max--;
	}
}

void	printAnswer(int *arr, int digit)
{
	int		i;
	int		k;
	int		box = 0;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < digit; k++)
		{
			if (arr[k] == i)
				box++;
		}
		printf("%d\n", box);
		box = 0;
	}
}

int		main(void)
{
	int		*arr;
	int		a, b, c;
	int		num;
	int		digit;

	scanf("%d\n%d\n%d", &a, &b, &c);
	num = a * b * c;
	digit = checkDigit(num);
	arr = (int *)malloc(sizeof(int) * (digit + 1));
	makeArr(arr, num, digit);
	printAnswer(arr, digit);
	free(arr);
	return (0);
}