#include <stdio.h>

int		ft_sqrt(int nb)
{
	unsigned int	n;

	n = 2;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (n * n < (unsigned int)nb)
		n++;
	return (n);
}

int		checkNum(int d)
{
	int		num;

	num = ft_sqrt(d) - 1;
	if (d <= num * num + num)
		return (2 * num);
	else
		return (2 * num + 1);
	return (1);
}

int		main(void)
{
	int		i;
	int		test_case;
	int		str_location, dest_location;

	scanf("%d", &test_case);
	for (i = 0; i < test_case; i++)
	{
		scanf("%d %d", &str_location, &dest_location);
		printf("%d\n", checkNum(dest_location - str_location));
	}
	return (0);
}