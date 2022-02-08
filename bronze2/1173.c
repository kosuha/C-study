#include <stdio.h>

int	main(void)
{
	int N, m, M, T, R;
	int time;
	int min;

	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
	if (M - m < T)
	{
		printf("-1");
		return (0);
	}

	time = 0;
	min = m;
	while (N > 0)
	{
		if (m + T <= M)
		{
			m += T;
			N--;
		}
		else
		{
			m -= R;
		}
		if (m < min)
		{
			m = min;
		}
		time++;
	}
	printf("%d", time);
	return (0);
}