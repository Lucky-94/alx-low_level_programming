#include "main.h"
#include <stdlib.h>

/**
 * str_concat-concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length1 = 0, length2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		length1 += 1;
	}
	for (i = 0; s2[i]; i++)
	{
		length2 += 1;
	}
	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	i = length1;
	while (*s2)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
