#include "main.h"

/**
 * _divide-returns square root of a number
 * @x: integer
 * @y: integer
 * Return: square root of n
 */
int _divide(int x, int y)
{
	if (x == 1)
		return (1);
	if (y >= x / 2)
		return (-1);
	if (x / y == y && x % y == 0)
		return (y);
	return (_divide(x, y + 1));
}
/**
 * _sqrt_recursion-returnz natural square root of a number
 * @n: integer
 * Return: natural square of n
 */
int _sqrt_recursion(int n)
{
	return (_divide(n, 1));
}
