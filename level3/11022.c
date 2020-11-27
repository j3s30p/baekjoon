#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		testCase;
	int		a;
	int		b;
	int 	i;
	int		*arr;
	int		*a_arr;
	int		*b_arr;

	scanf("%d", &testCase);
	arr = (int *)malloc(sizeof(int) * (testCase + 1));
	a_arr = (int *)malloc(sizeof(int) * (testCase + 1));
	b_arr = (int *)malloc(sizeof(int) * (testCase + 1));
	i = 0;
	for (i = 0; i < testCase; i++)
	{
		scanf("%d %d", &a, &b);
		a_arr[i] = a;
		b_arr[i] = b;
		arr[i] = a + b;
	}
	for (i = 0; i < testCase; i++)
		printf("Case #%d: %d + %d = %d\n", i+1, a_arr[i], b_arr[i], arr[i]);
	free (arr);
	return (0);
}