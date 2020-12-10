#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		i;
	int		n;
	int		x;
	int		*arr;

	scanf("%d %d", &n, &x);
	arr = (int *)malloc(sizeof(int) * (n + 1));
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < n; i++)
	{
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}
	free (arr);
	return (0);
}