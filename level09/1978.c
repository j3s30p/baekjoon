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
	int		i;
	int		test_case;
	int		num;
	int		result;

	scanf("%d", &test_case);
	result = 0;
	for (i = 0; i < test_case; i++)
	{
		scanf("%d", &num);
		if(checkPrime(num))
			result++;
	}
	printf("%d", result);
	return (0);
}