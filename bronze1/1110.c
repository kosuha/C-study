#include <stdio.h>

int	cycle(int pre_gen);

int	main(void)
{
	int genesis;
	int	num;
	int	count;

	scanf("%d", &genesis);
	num = genesis;
	count = 0;
	while (!count || num != genesis)
	{
		num = cycle(num);
		count++;
	}
	printf("%d", count);
	return (0);
}

int	cycle(int pre_gen)
{
	int	a, b, sum;

	a = pre_gen / 10;
	b = pre_gen % 10;
	sum = a + b;
	return ((b * 10) + (sum % 10));
}