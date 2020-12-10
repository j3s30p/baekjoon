#include <stdio.h>

int		checkDigit(int n)
{
	int		i;
	int		rslt;

	rslt = 0;
	while (n > 0)
	{
		n /= 10;
		rslt++;
	}
	return (rslt);
}

int		pow10(int n)
{
	int		i;
	int		rslt;

	rslt = 1;
	for (i = 0; i < n; i++)
		rslt *= 10;
	return(rslt);
}

int		d(int n)
{
	int		i;
	int		digit;
	int		rslt;

	rslt = n;
	digit = checkDigit(n);
	for (i = digit - 1; i >= 0; i--)
	{
		rslt += n / pow10(i);
		n -= pow10(i) * (n / pow10(i));
	}
	return (rslt);
}

void	selfNumber(int *arr)
{
	int		i;
	int		cpy_arr[10000];

	for (i = 0; i < 10000; i++)
	{
		arr[i] = i + 1;
		cpy_arr[i] = i + 1;
	}
	for (i = 0; i < 10000; i++)
	{
		if (cpy_arr[i] && d(cpy_arr[i]) <= 10000)
			arr[d(cpy_arr[i]) - 1] = 0;
	}
}

int		main(void)
{
	int		i;
	int		arr[10000];
	
	selfNumber(arr);
	for (i = 0; i < 10000; i++)
	{
		if (arr[i])
			printf("%d\n", arr[i]);
	}
	return (0);
}