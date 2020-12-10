#include <stdio.h>

int		checkRoomNum(int h, int w, int n)
{
	int		front, tail;

	front = n % h;
	tail = n / h;
	if (front)
		tail++;
	else
		front = h;
	return (100 * front + tail);
}

int		main(void)
{
	int		i;
	int		n;
	int		height, width, customer;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &height, &width, &customer);
		printf("%d\n", checkRoomNum(height, width, customer));
	}
	return (0);
}