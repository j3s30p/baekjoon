#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		testCase;
	int		a;
	int		b;
	int 	i;
	int		*arr;

	scanf("%d", &testCase);
	arr = (int *)malloc(sizeof(int) * (testCase + 1));
	i = 0;
	for (i = 0; i < testCase; i++)
	{
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < testCase; i++)
		printf("%d\n", arr[i]);
	free (arr);
	return (0);
}