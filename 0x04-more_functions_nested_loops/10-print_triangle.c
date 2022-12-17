#include "main.h"

/**
 * print_triangle-prints a triangle
 * _putchar-prints to standard output
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int x;
		int y;

		for (i = 1; i <= size; i++)
		{
			for (y = 1; y <= size - i; y++)
			{
				_putchar(' ');
			}
			for (x = 1; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
