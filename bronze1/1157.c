#include <stdio.h>

int	main(void)
{
	char	str[1000001];
	int		count_alphabet[26] = {0};
	int		i;
	int		max;
	char	result;

	scanf("%s", str);
	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		count_alphabet[str[i] - 'A']++;
		i++;
	}
	i = 0;
	max = 0;
	while (i < 26)
	{
		if (count_alphabet[i] == max)
		{
			result = '?';
		}
		if (count_alphabet[i] > max)
		{
			max = count_alphabet[i];
			result = i + 'A';
		}
		i++;
	}
	printf("%c", result);
	return (0);
}