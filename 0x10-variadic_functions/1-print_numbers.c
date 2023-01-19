#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers-prints numbers followed by a new line
 * @separator: separator string
 * @n: number of expected integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(nums, int));
		else
		{
			if (i != n - 1)
				printf("%d%s", va_arg(nums, int), separator);
			else
				printf("%d", va_arg(nums, int));
		}
	}
	printf("\n");
}
