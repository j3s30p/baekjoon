#include <stdio.h>
///이 코드는 미완성입니다.
///이 코드는 나머지의 경우를 모두 나눠서 계산할 생각이었습니다.
int		checkSack(int n, int *sack)
{
	if (n % 5 == 0)
		*sack = n / 5;
	else
	{
		if (n % 3 == 0)
			*sack = n / 3;
		else
		{
			*sack += n / 5;
			n -= 5 * (n / 5);
			if (n % 5 == 1)
				*sack += ((n + 5) / 3) - 1;
			else if (n % 5 == 3)
				*sack += n / 3;
			else if (n % 5)
				*sack = -1;
		}
	}
	return (1);
}

int		main(void)
{
	int		n;
	int		sack;

	scanf("%d", &n);
	sack = 0;
	checkSack(n, &sack);
	printf("%d", sack);
	return (0);
}