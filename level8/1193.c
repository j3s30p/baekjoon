#include <stdio.h>

int		main(void)
{
	int		i;
	int		x;
	int		element;
	int		box;

	scanf("%d", &x);
	element = 1;
	box = 1;
	for (i = 0; element <= x; i++)
	{
		element += box;
		box++;
	}
	if (i % 2)
		printf ("%d/%d", i - (x - (element - i)), 1 + (x - (element- i)));
	else
		printf ("%d/%d", 1 + (x - (element - i)), i - (x - (element- i)));
	return (0);
}