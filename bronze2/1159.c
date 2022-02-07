#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		is_contain(char c, char *str);
void	push_char(char c, char *first, int *first_count);
void	swap(char *a, char *b);
void	sort_str(char *str);

int	main(void)
{
	int		n;
	int		i;
	int		ci;
	char 	**players;
	char	*first_chars;
	int		*first_chars_count;

	scanf("%d", &n);
	players = (char **)malloc(sizeof(char *) * n);
	first_chars = (char *)malloc(sizeof(char) * n);
	first_chars_count = (int *)malloc(sizeof(int) * n);
	if (!players || !first_chars || !first_chars_count)
		return (0);

	i = 0;
	while (i < n)
	{
		first_chars[i] = 0;
		first_chars_count[i] = 0;
		i++;
	}

	i = 0;
	while (i < n)
	{
		players[i] = malloc(sizeof(char) * 30);
		if (!players[i])
			return (0);
		scanf("%s", players[i]);
		ci = is_contain(players[i][0], first_chars);
		if (ci != -1)
		{
			first_chars_count[ci]++;
		}
		if (ci == -1)
		{
			push_char(players[i][0], first_chars, first_chars_count);
		}
		i++;
	}

	i = 0;
	while (first_chars[i])
	{
		if (first_chars_count[i] < 5)
		{
			first_chars[i] = 'z' + 1;
		}
		i++;
	}

	sort_str(first_chars);
	i = 0;
	while (first_chars[i])
	{
		if (first_chars[i] == 'z' + 1)
		{
			if (i == 0)
				printf("PREDAJA");
			break;
		}
		printf("%c", first_chars[i]);
		i++;
	}
	
	i = 0;
	while (i < n)
	{
		free(players[i]);
		i++;
	}
	free(players);
	free(first_chars);
	free(first_chars_count);
	return (0);
}

void	sort_str(char *str)
{
	int	i;
	int	j = strlen(str);

	while (j > 0)
	{
		i = 0;
		while (i < j - 1)
		{
			if ((str[i] - str[i + 1]) > 0)
			{
				swap(&str[i], &str[i + 1]);
			}
			i++;
		}
		j--;
	}
}

void swap(char *a, char *b)
{
	char t;

	t = *a;
	*a = *b;
	*b = t;
}

int	is_contain(char c, char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void	push_char(char c, char *first, int *first_count)
{
	int	i = 0;

	while (first[i])
	{
		i++;
	}
	first[i] = c;
	first_count[i]++;
}