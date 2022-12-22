#include "main.h"
/**
 * _strncat-concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be taken from src
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;
	char *new_str;
	int x;

	length = 0;
	x = 0;
	new_str = dest;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		length++;
	}
	for (i = 0; x < n; i++)
	{
		*(new_str + length + i) = *(src + i);
		x++;
	}
	return (new_str);
}
