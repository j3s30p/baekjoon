#include <stdio.h>

int		main(void)
{
	int		i;
	int		n;
	int		bee;
	int		box;

	scanf("%d", &n);
	box = 1;
	bee = 1;
	for (i = 0; n >= bee ; i++)
	{
		bee += box;
		box += 6;
		if (i == 0)
			box--;
	}
	printf("%d", i);
}