#include <stdio.h>

int		main(void)
{
	int		i;
	int		time;
	char	arr[15];

	time = 0;
	scanf("%s", arr);
	for (i = 0; arr[i]; i++)
	{
		if (arr[i] <= 'C')
			time += 3;
		else if (arr[i] <= 'F')
			time += 4;
		else if (arr[i] <= 'I')
			time += 5;
		else if (arr[i] <= 'L')
			time += 6;
		else if (arr[i] <= 'O')
			time += 7;
		else if (arr[i] <= 'S')
			time += 8;
		else if (arr[i] <= 'V')
			time += 9;
		else
			time += 10;
	}
	printf ("%d", time);
	return (0);
}