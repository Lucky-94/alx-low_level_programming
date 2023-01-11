#include "main.h"
#include <stdlib.h>

/**
 * create_array-creates an array of chars
 * @size: size of the array
 * @c: initializer
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ('\0');
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return ('\0');
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
