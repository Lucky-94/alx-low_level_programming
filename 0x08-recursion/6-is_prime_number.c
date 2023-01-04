#include "main.h"
/**
 * prime_suspect-checks if a number is prime
 * @a: integer
 * @b: counter
 * Return: 0 or 1
 */
int prime_suspect(int a, int b)
{
	if (a == 1 || a == -1)
		return (0);
	if (b != a)
	{
		if (a % b == 0)
		{
			return (0);
		}
		if (b > 9)
		{
			return (1);
		}
	}
	return (prime_suspect(a, b + 1));
}
/**
 * is_prime_number-checks if a number is prime or not
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_suspect(n, 2));
}
