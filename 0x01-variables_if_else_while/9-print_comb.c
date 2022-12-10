#include <stdio.h>

/**
 * main - prints all the possible combinations of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 1; n <= 9; n++)
	{
		for (i = 1; i <= 9; i++)
		{
			putchar(48 + n);
			putchar(48 + i);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
