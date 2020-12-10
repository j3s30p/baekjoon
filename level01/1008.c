#include <stdio.h>

int		main(void)
{
	int		a;
	int		b;

	scanf("%d %d",&a, &b);
	printf("%.9lf", (double)a / b);
	return (0);
}
/*
(double)a / b 를 하게 되면
a가 먼저 실수형으로 바뀌고 사칙연산이 시작되는데
그러면 c언어 규칙에 의해서 b도 실수형으로 변형된다
*/