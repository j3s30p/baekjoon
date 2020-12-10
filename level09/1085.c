#include <stdio.h>
// 왜 틀렸는지는 모르지만 어렵게 풀어서 틀린코드
int		checkSquare(float x, float y, float cx, float cy)
{
	float	max;

	max = cx >= cy ? cx : cy;
	if (x <= cx && y <= cy)
		return (0);
	else if (x > cx && y > cy )
		return (1);
	else
	{
		if (y  >= cy)
		{
			if (x + (cy - y) <= max)
				return (0);
			else
				return (1);
		}
		else
		{
			if ((x - cx) + y <= max)
				return (0);
			else
				return (1);
		}
	}
}

int		findShortWay(int x, int y, int w, int h)
{
	float	center_x, center_y;
	int		distance, point_1, point_2;

	center_x = (float)w / 2;
	center_y = (float)h / 2;
	if (checkSquare(x, y, center_x, center_y))
	{
		point_1 = w - x;
		point_2 = h - y;
		distance = point_1 >= point_2 ? point_2 : point_1;
	}
	else
	{
		point_1 = x;
		point_2 = y;
		distance = x >= y ? y : x;
	}
	
	return (distance);
}

int		main(void)
{
	int		loc_x, loc_y;
	int		max_x, max_y;

	scanf("%d %d %d %d", &loc_x, &loc_y, &max_x, &max_y);
	printf("%d", findShortWay(loc_x, loc_y, max_x, max_y));
	return (0);
}