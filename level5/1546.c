#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		i;
	int		n;
	float	max = 0;
	float	rslt = 0;
	float	*arr;

	scanf("%d", &n);
	arr = (float *)malloc(sizeof(float) * (n + 1));
	for (i = 0; i < n; i++)
		scanf("%f", &arr[i]);
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	if (max == 0)
	{
		printf ("0");
		return (0);
	}
	for (i = 0; i < n; i++)
		rslt += arr[i] / max * 100;
	printf("%.2f", rslt / n);
	return (0);
}