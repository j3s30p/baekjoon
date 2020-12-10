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
	return (rslt - 1);
}

int		pow10(int n)
{
	int		i;
	int		rslt;

	rslt = 1;
	for (i = 0; i < n; i++)
		rslt *= 10;
	return (rslt);
}

int		checkHansu(int n)
{
	int		i;
	int		digit;
	int		cpy_digit;
	int		box;
	int		diff;

	digit = checkDigit(n);
	cpy_digit = digit;
	for (i = 0; i <= digit; i++)
	{
		if (i > 0)
		{
			if(i > 1 && diff != box - (n / pow10(cpy_digit)))
				return (0);
			diff = box - (n / pow10(cpy_digit));
		}
		box = n / pow10(cpy_digit);
		n -= pow10(cpy_digit) * (n / pow10(cpy_digit));
		cpy_digit--;
	}
	return (1);
}

int		main(void)
{
	int		i;
	int		n;
	int		rslt;

	rslt = 99;
	scanf("%d", &n);
	if (n < 100)
		printf("%d", n);
	else 
	{
		for (i = 100; i <= n; i++)
		{
			if(checkHansu(i))
				rslt++;
		}
		printf("%d", rslt);
	}
	return (0);
}