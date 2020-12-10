#include <stdio.h>
#include <math.h>

double	checkDistance(int x1, int y1, int x2, int y2)
{
	int		d1, d2;
	double	distance;
	
	d1 = x1 >= x2 ? x1 - x2 : x2 - x1;
	d2 = y1 >= y2 ? y1 - y2 : y2 - y1;
	distance = d1 * d1 + d2 * d2;
	return (sqrt(distance));
}

int		main(void)
{
	int		i, testCase;
	int		x1, y1, r1;
	int		x2, y2, r2;
	int		big, small;
	double	distance;
	
	scanf("%d", &testCase);
	for (i = 0; i < testCase; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		big = r1 >= r2 ? r1 : r2;
		small = r1 >= r2 ? r2 : r1;
		distance = checkDistance(x1, y1, x2, y2);
		if (!distance && big == small)
			printf("-1\n");
		else if (distance > big + small || distance < big - small)
			printf("0\n");
		else if (distance == big + small || distance == big - small)
			printf("1\n");
		else
			printf("2\n");
	}
	return (0);
}