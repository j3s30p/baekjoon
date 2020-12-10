#include <stdio.h>

int		main(void)
{
	long long	fixed_cost, cost, price;
	long long	box;
	int		i;

	scanf ("%lld %lld %lld", &fixed_cost, &cost, &price);
	if (cost >= price)
		printf("-1");
	else
	{
		box = fixed_cost / (price - cost) + 1;
		printf("%lld", box);
	}
	return (0);
}