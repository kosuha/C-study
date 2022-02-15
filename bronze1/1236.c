#include <stdio.h>

int	main(void)	
{
	int		x, y;
	int		i, j;
	char	board[51][51];
	int		count_x, count_y;

	scanf("%d %d", &x, &y);
	i = 0;
	while (i < x)
	{
		scanf("%s", board[i]);
		i++;
	}

	i = 0;
	count_x = x;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (board[i][j] == 'X')
			{
				count_x--;
				break;
			}
			j++;
		}
		i++;
	}

	j = 0;
	count_y = y;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (board[i][j] == 'X')
			{
				count_y--;
				break;
			}
			i++;
		}
		j++;
	}

	if (count_x > count_y)
		printf("%d", count_x);
	else
		printf("%d", count_y);

	return (0);
}