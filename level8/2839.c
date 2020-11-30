#include <stdio.h>

int		checkSack(int n, int *sack, int flag)
{
	if (n == 0)
		return (1);
	if (flag == 5)
	{
		*sack += n / 5;
		n -= 5 * (n / 5);
		checkSack(n, sack, 3);
	}
	if (flag == 3)
	{
		if (n % 3)
		{
			*sack -= 1;
			checkSack (n + 5, sack, 3);
		}
		else
			*sack += n / 3;
	}
	return (1);
}

int		main(void)
{
	int		n;
	int		sack;

	scanf("%d", &n);
	sack = 0;
	if (n == 3)
		printf ("1");
	else if (n < 5)
		printf ("-1");
	else
	{
		checkSack(n, &sack, 5);
		printf("%d", sack);
	}
	return (0);
}