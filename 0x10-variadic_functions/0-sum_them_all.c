#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all-returns sum of all parameters
 * @n: nymber of parameters
 * Returns: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pars;
	unsigned int i;
	int sum = 0;

	va_start(pars, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pars, int);
	}
	va_end(pars);
	return (sum);
}
