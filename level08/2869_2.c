#include <stdio.h>

int		main(void)
{
	int		height;
	int		climb;
	int		slip;
	int		distance;
	int		day;

	scanf("%d %d %d", &climb, &slip, &height);
	day = 0;
	distance = 0;
	while (1)
	{
		day++;
		distance += climb;
		if (distance >= height)
			break;
		distance -= slip; 
	}
	printf("%d", day);
	return (0);
}