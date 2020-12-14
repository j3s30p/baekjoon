#include <stdio.h>
#include <stdlib.h>

void	makeStar(int n, char **arr)
{
	int		i, k;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (i % 3 == 1 && k % 3 == 1)
				arr[i][k] = ' ';
		}
	}
}

int		main(void)
{
	int		i, k;
	int		n;
	char	**arr;

	scanf("%d", &n);
	arr = (char **)malloc(sizeof(char *) * n);
	for (i = 0; i < n; i++)
		arr[i] = (char *)malloc(sizeof(char) * n);
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
			arr[i][k] = '*';
	}
	makeStar(n, arr);
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
			printf("%c", arr[i][k]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
		free(arr[i]);
	free(arr);
	return (0);
}