#include <stdio.h>
#define PI 3.14159265358979

int		main(void)
{
	int		radius;

	scanf("%d", &radius);
	printf("%.6f\n", radius * radius * PI);
	printf("%.6f\n", radius * radius * 2.0);
	return (0);
}
//float형을 표현해주기 위해서 2.0으로 한거같은데...
//찾아봐야 할듯