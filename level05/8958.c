#include <stdio.h>

int		checkScore(char *arr)
{
	int		i;
	int		box;
	int		count;
	int		rslt;

	i = 0;
	rslt = 0;
	count = 1;
	while (arr[i])
	{
		if (arr[i] == 'O')
		{
			rslt += count;
			count++;
		}
		else
			count = 1;
		i++;
	}
	return(rslt);
}

int		main(void)
{
	int		i;
	int		n;
	char	arr[80];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr);
		printf("%d\n", checkScore(arr));
	}
	return (0);
}