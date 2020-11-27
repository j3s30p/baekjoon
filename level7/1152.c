#include <stdio.h>

int		main(void)
{
	int		i;
	int		flag;
	int		count;
	char	c;

	flag = 0;
	count = 0;
	while (scanf("%c", &c))
	{
		if (c == '\n')
			break;
		if (c == ' ')
			flag = 0;
		if (flag == 0 && c != ' ')
		{
			count++;
			flag = 1;
		}
	}
	printf ("%d", count);
}