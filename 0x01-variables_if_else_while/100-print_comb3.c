#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (n == i || n > i)
				continue;
			putchar(48 + n);
			putchar(48 + i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
