#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat-concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters to be taken from s2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, mem, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		l1 += 1;
	}
	for (i = 0; s2[i]; i++)
	{
		l2 += 1;
	}
	if (n >= l2)
		mem = l1 + l2;
	else if (n < l2)
		mem = l1 + n;
	ptr = malloc(sizeof(char) * (mem + 1));
	if (!ptr)
		return (NULL);
	for  (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < mem; i++)
	{
		ptr[i] = s2[i - l1];
	}
	ptr[i] = '\0';
	return (ptr);
}
