#include <stdio.h>
//timeout_예제풀이
int		ft_sqrt(int nb)
{
	unsigned int	n;

	n = 2;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (n * n <= (unsigned int)nb)
	{
		if (n * n == (unsigned int)nb)
			return (n);
		n++;
	}
	return (n);
}

int		checkPrime(int nb)
{
	int		i;

	i = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int		main(void)
{
	int		min, max;
	int		sum;

	while (1)
	{
		scanf("%d", &min);
		if (min == 0)
			break;
		max = 2 * min;
		min++;
		sum = 0;
		while (min <= max)
		{
			if (checkPrime(min))
				sum++;
			min++;
		}
		printf ("%d\n", sum);
	}
	return (0);
}