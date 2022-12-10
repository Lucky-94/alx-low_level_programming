#include <stdio.h>

/**
 * main - prints all the possible combinations of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
