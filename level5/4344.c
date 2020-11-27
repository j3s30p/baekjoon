#include <stdio.h>
#include <stdlib.h>

float	print_average(int *arr, int n)
{
	int		i;
	float	average;
	float	rslt;

	average = 0;
	rslt = 0;
	for (i = 0; i < n; i++)
		average += arr[i];
	average /= n;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > average)
			rslt++;
	}
	return (100 * (rslt / n));	
}

int		main(void)
{
	int		i;
	int		k;
	int		n;
	int		student_num;
	int		*arr;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &student_num);
		arr = (int *)malloc(sizeof(int) * (student_num + 1));
		for (k = 0; k < student_num; k++)
			scanf("%d", &arr[k]);
		printf("%.3f%%\n", print_average(arr, student_num));
		free (arr);
	}
	return (0);
}