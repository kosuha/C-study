#include <stdio.h>

int	main(void)
{
	int	n;
	int	f;

	scanf("%d", &n);
	scanf("%d", &f);

	n = (n / 100) * 100;
	while ((n % f) != 0)
	{
		n++;
	}
	n = n % 100;
	if (n < 10)
	{
		printf("0%d", n);
		return (0);
	}
	printf("%d", n);
	return (0);
}