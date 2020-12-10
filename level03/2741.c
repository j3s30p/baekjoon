#include <stdio.h>

int		main(void)
{
	unsigned int	n;
	unsigned int	result = 0;
	scanf("%d", &n);

	for (; n > 0; n--)
		result += n;
	printf("%d", result);
	return (0);
}