#include <stdio.h>

int		main(void)
{
	int		i;
	int		k;
	int		n;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (k = i + 1; k < n; k++)
			printf(" ");
		for (k = 0; k <= i; k++)
			printf("*");
		printf ("\n");
	}
	return (0);
}