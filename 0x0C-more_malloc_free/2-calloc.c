#include "main.h"
#include <stdlib.h>

/**
 * _calloc-allocates memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	void *ptr;

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	p = (char *)ptr;
	for (i = 0; i < nmemb; i++)
	{
		*p = 0;
	}
	return (ptr);
}
