#include <stdio.h>

int	min_num(int num[5]);

int	main(void)
{
	int	num[5];
	int min;
	int count;
	int i;

	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	min = min_num(num);
	i = 0;
	count = 0;
	while (count < 3)
	{
		if (i > 4)
		{
			count = 0;
			i = 0;
			min++;
		}
		if (min && !(min % num[i]))
		{
			count++;
		}
		i++;
	}
	printf("%d", min);
	return (0);
}

int	min_num(int num[5])
{
	int	min = 101;
	int	i = 0;
	while (i < 5)
	{
		if (min > num[i])
		{
			min = num[i];
		}
		i++;
	}
	return (min);
}