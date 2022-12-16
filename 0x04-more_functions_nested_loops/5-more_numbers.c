#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 * _putchar - prints to stdout
 * Return: 0
 */
void more_numbers(void)
{
	for (int a = 1; a <= 10; a++)
	{
		for (int b = 0; b <= 14; b++)
			_putchar(48 + b);
		_putchar('\n');
	}
	_putchar('\n');
}
