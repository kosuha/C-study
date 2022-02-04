#include <stdio.h>

int	main(void)
{
	char	board[8][8];
	int		i, j, flag;
	int		count;

	i = 0;
	while (i < 8)
	{
		scanf("%s", board[i]);
		i++;
	}

	count = 0;
	i = 0;
	flag = 1;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if ((flag > 0) && (board[i][j] == 'F'))
			{
				count++;
			}
			j++;
			flag *= -1;
		}
		flag *= -1;
		i++;
	}
	printf("%d", count);
	return (0);
}