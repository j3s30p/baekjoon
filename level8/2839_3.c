#include <stdio.h>

int		checkSack(int n, int *sack)
{
	int		box;

	*sack = n / 5;
	box = n - (5 * (n / 5));
	if (box == 0)
		return (1);
	while (*sack >= 0)
	{
		if (box % 3 == 0)
		{
			*sack += box / 3;
			return (1);
		}
		*sack -= 1;
		box += 5;
	}
	*sack = -1;
	return (0);
}

int		main(void)
{
	int		n;
	int		sack;

	scanf("%d", &n);
	if (n == 3)
		sack = 1;
	else
		checkSack(n, &sack);
	printf("%d", sack);
	return (0);
}