#include <stdio.h>

int		main(void)
{
	char	c;
	
	scanf("%c", &c);
	if ((c >= '0' && c <= '9') ||
		(c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		printf("%d", c);
	return (0);
}