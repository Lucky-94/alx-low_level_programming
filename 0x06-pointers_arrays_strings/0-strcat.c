#include "main.h"

/**
 * _strcat-concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length;
	char *new_str;

	length = 0;
	new_str = dest;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		length++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(new_str + length + i) = *(src + i);
	}
	return (new_str);
}
