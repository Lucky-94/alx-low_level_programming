#include <stdio.h>

/**
 * main - prints all possible combinations of three digit numbers,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (b == c || b > c)
					continue;
				if (a == b || a > b)
					continue;
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);
				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
