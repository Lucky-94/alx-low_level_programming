#include "main.h"

/**
 * _strcpy-copies a string
 * @src: pointer to source
 * @dest: pointer to destination
 * Return: A character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;
	char *ptr;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(src + i);
	}
	ptr = dest;
	return (ptr);
}
