#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index-searches for an integer
 * @array: pointer to array of integers
 * @size: size of array
 * @cmp: pointer to comparison function
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
				return (i);
		}
	}
	return (-1);
}
