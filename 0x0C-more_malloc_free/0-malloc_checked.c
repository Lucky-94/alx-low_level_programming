#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked-allocates memory using malloc
 * @b: memory to be allocated (in bytes)
 * Return: a pointer to tbe allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
