#include <stdio.h>
#include <stdlib.h>

void	sumWidth(int h, int w, int *arr, int n)
{
	int		i;
	int 	*new_arr;

	new_arr = (int *)malloc(sizeof(int) * (h + 1));
	new_arr[0] = n + 1;
	for (i = 1; i < h + 1; i++)
	{
		new_arr[i] = arr[i] + new_arr[i - 1];
		arr[i] = new_arr[i];
	}
	free(new_arr);
}

int		checkPeople(int h, int w)
{
	int		i;
	int		*arr;
	int		people;

	arr = (int *)malloc(sizeof(int) * (h + 1));
	for (i = 0; i < h + 1; i++)
		arr[i] = 1;
	for (i = 1; i < w; i++)
		sumWidth(h, w, arr, i);
	people = arr[h];
	free(arr);
	return (people);
}

int		main(void)
{
	int		i;
	int		n;
	int		floor, roomNum;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d\n%d", &floor, &roomNum);
		printf("%d\n", checkPeople(floor, roomNum));
	}
	return (0);
}