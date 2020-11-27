#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		n;
	int		i;
	int		box;
	int		*arr;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * (n + 1));
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	box = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < box)
			box = arr[i];
	}
	printf("%d ", box);
	box = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > box)
			box = arr[i];
	}
	printf("%d", box);
	free(arr);
	return (0);
}