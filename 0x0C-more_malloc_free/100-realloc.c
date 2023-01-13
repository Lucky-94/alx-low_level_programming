#include "main.h"
#include <stdlib.h>

/**
 * _realloc-reallocates a memory block
 * @ptr: pointer to a previously allocated memory block
 * @old_size: size of the previous memory block
 * @new_size: size of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		free (ptr);
		return (NULL);
	return (ptr);
}