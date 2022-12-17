#include "main.h"

/**
 * print_triangle-prints a triangle
 * _putchar-prints to standard output
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int y;

		for (y = 1; y <= size - i; y++)
		{
			_putchar(' ');
		}
		_putchar('#');
	}
	_putchar('\n');
}
