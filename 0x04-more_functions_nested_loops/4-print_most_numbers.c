#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * _putchar - prints to stdout
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(48 + a);
		a++;
	}
	return (0);
}
