#include <stdio.h>

int		main(void)
{
	int		x, y, w, h;
	int		low;

	scanf("%d %d %d %d", &x, &y ,&w, &h);
	low = h - y;
	if (w - x < low)
		low = w - x;
	if (x - 0 < low)
		low = x - 0;
	if (y - 0 < low)
		low = y - 0;
	printf("%d", low);
	return (0);
}