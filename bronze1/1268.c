#include <stdio.h>
#include <stdlib.h>

int	count_same_class(int student, int **list, int headcount);

int	main(void)
{
	int **list;
	int headcount;
	int	i;
	int	captain;
	int	count_max;
	int count;

	scanf("%d", &headcount);
	list = (int **)malloc(sizeof(int *) * headcount);
	if (!list)
		return (0);
	i = 0;
	while (i < headcount)
	{
		list[i] = (int *)malloc(sizeof(int) * 5);
		if (!list[i])
			return (0);
		scanf("%d %d %d %d %d", &list[i][0], &list[i][1], &list[i][2], &list[i][3], &list[i][4]);
		i++;
	}
	
	i = 0;
	count = 0;
	count_max = 0;
	captain = 0;
	while (i < headcount)
	{
		count = count_same_class(i, list, headcount);
		if (count == -1)
			break;
		if (count > count_max)
		{
			count_max = count;
			captain = i;
		}
		i++;
	}
	printf("%d", captain + 1);

	i = 0;
	while (i < headcount)
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (0);
}

int	count_same_class(int student, int **list, int headcount)
{
	int i;
	int	j;
	int count = 0;
	int *flags;

	flags = (int *)malloc(sizeof(int) * headcount);
	if (!flags)
		return (-1);
	i = 0;
	while (i < headcount)
	{
		flags[i] = 0;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < headcount)
		{
			if (!flags[j] && (list[student][i] == list[j][i]))
			{
				flags[j] = 1;
				count++;
			}
			j++;
		}
		i++;
	}
	free(flags);
	return (count - 1);
}