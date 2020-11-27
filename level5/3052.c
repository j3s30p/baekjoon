#include <stdio.h>
#include <stdlib.h>

int		checkRemain(int *arr)
{
	int		i;
	int		k;
	int		check = -1;
	int		rslt = 0;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] >= 0)
		{
			for (k = 0; k < 10; k++)
			{
				if (arr[i] == arr[k] && i != k)
					arr[k] = check;
			}
			arr[i] = check;
			check--;
		}
	}
	if (arr[9] == -1)
		return (rslt);
	for (i = 0; i < 10; i++)
	{
		if (arr[i] < rslt)
			rslt = arr[i];
	}
	return (-1 * rslt);
}

int		main(void)
{
	int		i;
	int		arr[11];

	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < 10; i++)
		arr[i] %= 42;
	printf ("%d", checkRemain(arr));
	return (0);
}