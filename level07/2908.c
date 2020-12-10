#include <stdio.h>

void	changeArr(char *arr)
{
	char	box;

	box = arr[0];
	arr[0] = arr[2];
	arr[2] = box;
}
int		main(void)
{
	int		i;
	char	arr_1[4];
	char	arr_2[4];

	scanf ("%s %s", arr_1, arr_2);
	changeArr(arr_1);
	changeArr(arr_2);
	for (i = 0; i < 3; i++)
	{
		if (arr_1[i] > arr_2[i])
		{
			printf("%s", arr_1);
			break;
		}
		else if (arr_1[i] < arr_2[i])
		{
			printf("%s", arr_2);
			break;
		}
	}
	return (0);
}