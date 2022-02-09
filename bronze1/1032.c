#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		n;
	char 	**filename;
	int		i;
	int		j;

	scanf("%d", &n);
	filename = (char **)malloc(sizeof(char *) * n);
	if (!filename)
		return (0);
	i = 0;
	while (i < n)
	{
		filename[i] = (char *)malloc(sizeof(char) * 51);
		if (!filename[i])
			return (0);
		scanf("%s", filename[i]);
		i++;
	}
	
	j = 0;
	while (filename[0][j])
	{
		i = 0;
		while (i < n - 1)
		{
			if (filename[i][j] != filename[i + 1][j])
			{
				printf("?");
				break;
			}
			i++;
		}
		if (i == n - 1)
			printf("%c", filename[i][j]);
		j++;
	}

	i = 0;
	while (i < n)
	{
		free(filename[i]);
		i++;
	}
	free(filename);
	return (0);
}