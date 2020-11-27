#include <stdio.h>

int		main(void)
{
	int		i;
	int		count;
	char	arr[100];
	
	scanf("%s", arr);
	count = 0;
	i = 0;
	while (arr[i])
	{
		if (arr[i] == 'c')
		{
			if (arr[i + 1] != '-' && arr[i + 1] != '=')
				count++;
		}
		else if (arr[i] == 'd')
		{
			if (!(arr[i + 1] == 'z' && arr[i + 2] == '=') && arr[i + 1] != '-')
				count++;
		}
		else if (arr[i] == 'l')
		{
			if (arr[i + 1] != 'j')
				count++;
		}
		else if (arr[i] == 'n')
		{
			if (arr[i + 1] != 'j')
				count++;
		}
		else if (arr[i] == 's')
		{
			if (arr[i + 1] != '=')
				count++;
		}
		else if (arr[i] == 'z')
		{
			if (arr[i + 1] != '=')
				count++;
		}
		else
			count++;
		i++;
	}
	printf("%d", count);
	return (0);
}