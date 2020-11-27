#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		i;
	int		n;
	int		rslt;
	char	*arr;

	rslt = 0;
	scanf("%d", &n);
	arr = (char *)malloc(sizeof(char) * (n + 1));
	scanf("%s", arr);
	for (i = 0; i < n; i++)
		rslt += arr[i] - 48;
	free(arr);
	printf("%d", rslt);
	return (0);
}