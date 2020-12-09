#include <stdio.h>

int		main(void)
{
	int		x_1, x_2, x_3;
	int		y_1, y_2, y_3;

	scanf ("%d %d", &x_1, &y_1);
	scanf ("%d %d", &x_2, &y_2);
	scanf ("%d %d", &x_3, &y_3);
	if (x_2 == x_3)
		printf ("%d ", x_1);
	else
	{
		if (x_1 == x_3)
			printf("%d ", x_2);
		else
			printf("%d ", x_3);
	}
	if (y_2 == y_3)
		printf ("%d", y_1);
	else
	{
		if (y_1 == y_3)
			printf("%d", y_2);
		else
			printf("%d", y_3);
	}
	return (0);
}