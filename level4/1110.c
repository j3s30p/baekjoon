#include <stdio.h>

int		main(void)
{
	int		num;
	int		cpy_num;
	int		a;
	int		b;
	int		count;
	
	scanf("%d", &num);
	a = num / 10;
	b = num - (10 * (num / 10));
	cpy_num = 10 * b + (a + b);
	if ((a + b) > 9)
		cpy_num = 10 * b + (a + b - 10);
	count = 1;
	while (cpy_num != num)
	{
		a = cpy_num / 10;
		b = cpy_num - (10 * (cpy_num / 10));
		cpy_num = 10 * b + (a + b);
		if ((a + b) > 9)
			cpy_num = 10 * b + (a + b - 10);
		count++;
	}
	printf("%d", count);
	return (0);
}