#include <stdio.h>

int		main(void)
{
	int		i;
	int		box;
	int		box_num;
	int		arr[9];

	for (i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	box = arr[0];
	box_num = 1;
	for (i = 1; i < 9; i++)
	{
		if (arr[i] > box)
		{
			box = arr[i];
			box_num = i + 1;
		}
	}
	printf("%d\n%d", box, box_num);
	return (0);
}