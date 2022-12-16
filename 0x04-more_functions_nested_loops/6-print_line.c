#include "main.h"

/**
 * print_line - draws a straightline through the terminal
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
