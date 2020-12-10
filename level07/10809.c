#include <stdio.h>
#include <string.h>

int		main(void)
{
	int		i;
	char	arr[100];
	int		ans_arr[26];

	scanf("%s", arr);
	for (i = 0; i < 26; i++)
		ans_arr[i] = -1;
	for (i = 0; i < strlen(arr); i++)
	{
		if (ans_arr[arr[i] - 97] < 0)
			ans_arr[arr[i] - 97] = i;
	}
	for (i = 0; i < 26; i++)
		printf("%d ", ans_arr[i]);
	return (0);
}