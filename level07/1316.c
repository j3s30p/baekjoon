#include <stdio.h>

int		checkGroupWord(char *arr)
{
	int		i;
	int		k;
	int		flag;
	char	box;

	box = arr[0];
	for (i = 0; arr[i]; i++)
	{
		if (arr[i] == box)
			flag = 0;
		else
			flag = 1;
		if (flag)
		{
			for (k = 0; k < i; k++)
			{
				if (arr[i] == arr[k])
					return (0);
			}
		}
		box = arr[i];
	}
	return (1);
}

int		main(void)
{
	int		i;
	int		n;
	int		groupWord;
	char	arr[100];

	scanf("%d", &n);
	groupWord = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr);
		if (checkGroupWord(arr))
			groupWord++;
	}	
	printf("%d", groupWord);
	return (0);
}