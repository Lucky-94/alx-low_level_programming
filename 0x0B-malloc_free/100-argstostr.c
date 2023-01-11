#include "main.h"
#include <stdlib.h>

/**
 * argstostr-concantenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the new str
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, a, counter = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			counter += 1;
		}
		counter += 1;
	}
	counter += 1;
	ptr = malloc(sizeof(char) * counter);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	a = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[a] = av[i][j];
			a++;
			j++;
		}
		ptr[a] = '\n';
		a++;
		i++;
	}
	ptr[a] = '\0';
	return (ptr);
}
