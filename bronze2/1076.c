#include <stdio.h>
#include <string.h>

int	index_of(char *str, char **colors);
int	pow_ten(int n);

int	main(void)
{
	char				inputs[3][10];
	long long			resist;
	char				*colors[10] = {
		"black",
		"brown",
		"red",
		"orange",
		"yellow",
		"green",
		"blue",
		"violet",
		"grey",
		"white"
		};

	scanf("%s", inputs[0]);
	scanf("%s", inputs[1]);
	scanf("%s", inputs[2]);
	resist = (index_of(inputs[0], colors) * 10) + index_of(inputs[1], colors);
	resist *= pow_ten(index_of(inputs[2], colors));
	printf("%lld", resist);
	return (0);
}

int	index_of(char *str, char **colors)
{
	int i = 0;

	while (i < 10)
	{
		if (!strcmp(colors[i], str))
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	pow_ten(int n)
{
	int	result = 1;
	while (n > 0)
	{
		result *= 10;
		n--;
	}
	return (result);
}