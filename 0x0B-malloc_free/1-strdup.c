#include "main.h"
#include <stdlib.h>

/**
 * _strdup-duplicates a string
 * @str: string to be duplicated
 * Return: a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int i, counter = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		counter += 1;
	}
	counter = counter + 1;
	ptr = malloc(sizeof(char) * counter);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
