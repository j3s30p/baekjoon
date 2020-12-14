#include <stdio.h>
#include <stdlib.h>

void	makeStar(int n, char **arr, int a, int b, int c)
{
	int		i, k;
	int		box;

	box = b - a;
	// a, b, c를 계속 줄여가기 때문에 a, b , c != 0일때 한정.
	if (a && b && c)
	{
		// 크기에 맞는 공백을 모두 채울때까지 반복
		if (c < n)
		{
			//실제로 공백을 주는 부분
			for (i = c; i < c + box; i++)
			{	
				for (k = a; k < b; k++)
					arr[i][k] = ' ';
			}
			//한칸씩 우측으로 이동
			if (b + (2 * box) < n)
			{
				a = b + 2 * box;
				b = a + box;
				makeStar(n, arr, a, b, c);
			}
			//한칸씩 아래로 이동
			else
			{
				c += 3 * box;
				makeStar(n, arr, box, 2 * box, c);
			}
		}
		//	c >= n이 되면 더 작은 부분으로 넘어간다.
		else
			makeStar(n, arr, box / 3, 2 * (box / 3), box / 3);
	}
	else
	{	//배열 출력
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n; k++)
				printf("%c", arr[i][k]);
		printf("\n");
		}
	}
}

int		main(void)
{
	int		i, k;
	int		n;
	char	**arr;

	scanf("%d", &n);
	//n * n 만큼 동적할당
	arr = (char **)malloc(sizeof(char *) * n);
	for (i = 0; i < n; i++)
		arr[i] = (char *)malloc(sizeof(char) * n);
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
			arr[i][k] = '*';
	}
	//별찍기 배열 완성, 출력
	makeStar(n, arr, n / 3, (n / 3) * 2, n / 3);
	//동적할당 풀어주기
	for (i = 0; i < n; i++)
		free(arr[i]);
	free(arr);
	return (0);
}