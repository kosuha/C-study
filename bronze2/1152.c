#include <stdio.h>

int	main(void)
{
	char 	str[1000000];
	int		count;
	int		i;
	int		flag;

	scanf("%[^\n]s", str);
	count = 0;
	i = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			flag = 0;
		}
		if (!flag && str[i] != ' ')
		{
			count++;
			flag = 1;
		}
		i++;
	}
	printf("%d", count);
	return (0);
}