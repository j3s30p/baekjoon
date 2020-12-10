#include <stdio.h>

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
		return (2);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (nb);
}

int		main(void)
{
	int		min, max;
	int		sum, min_prime;

	scanf("%d\n%d", &min, &max);
	sum = 0;
	min_prime = 0;
	while (min <= max)
	{
		sum += checkPrime(min);
		if (checkPrime(min) && !(min_prime))
			min_prime = checkPrime(min);
		min++;
	}
	if (min_prime)
		printf ("%d\n%d", sum, min_prime);
	else
		printf ("-1");
	return (0);
}