#include <stdio.h>

void	printAlpha(int *arr)
{
	int		i;
	int		rslt;
	int		count;
	int		max;

	max = 0;
	count = 0;
	for (i = 0; i < 26; i++)
	{
		if (arr[i] == max)
			count++;
		if (arr[i] > max)
		{
			max = arr[i];
			rslt = i;
			count = 0;
		}
	}
	if (count)
		printf("?");
	else
		printf("%c", rslt + 65);	
}

int		main(void)
{
	int		i;
	char	c;
	int		arr[26];

	for (i = 0; i < 26; i++)
		arr[i] = 0;
	while (scanf("%c", &c))
	{
		if (c == '\n')
			break;
		if (c >= 'a' && c <= 'z')
			arr[c - 97] += 1;
		else
			arr[c - 65] += 1;
	}
	printAlpha(arr);
	return (0);
}