#include <stdio.h>

int		main(void)
{
	int		climb;
	int		slip;
	int		height;
	int		day;

	scanf("%d %d %d", &climb, &slip, &height);
	day = 1;
	if (climb <= height)
		day = ((height - slip - 1) / (climb - slip)) + 1;
	printf ("%d", day);
	return (0);
}