#include <stdio.h>

int	main(void)
{
	int x;
	int i;
	scanf("%d", &x);
	
	i = 1;
	while (i < x)
	{
		x -= i;
		i++;
	}
	if (i % 2 == 0)
	{
		printf("%d/%d", x, i + 1 - x);
	}
	if (i % 2 == 1)
	{
		printf("%d/%d", i + 1 - x, x);
	}
	return (0);
}