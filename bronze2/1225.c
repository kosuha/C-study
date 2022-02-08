#include <stdio.h>

int	main(void)
{
	char			a[10001] = "";
	char			b[10001] = "";
	long long int	result = 0;
	int				i, j;

	scanf("%s %s", a, b);
	i = 0;
	while (a[i])
	{
		j = 0;
		while (b[j])
		{
			result += ((a[i] - '0') * (b[j] - '0'));
			j++;
		}
		i++;
	}

	printf("%lld", result);
	return (0);
}