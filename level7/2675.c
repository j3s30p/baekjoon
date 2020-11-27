#include <stdio.h>
#include <string.h>

void	repeatString(int n, char *arr)
{
	int		i;
	int		k;

	for (i = 0; i < strlen(arr); i++)
	{
		for (k = 0; k < n; k++)
			printf("%c", arr[i]);
	}
	printf("\n");
}

int		main(void)
{
	int		i;
	int		n;
	int		rp;
	char	arr[20];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &rp, arr);
		repeatString(rp, arr);
	}
	return (0);
}