#include <stdio.h>

/**
 * main - prints all possible combinations of two two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == b && a == c && a == d)
						continue;
					if (a == c && b == d)
						continue;
					if ((c * 10  + d) < (a * 10 + b))
						continue;
					putchar(48 + a);
					putchar(48 + b);
					putchar(' ');
					putchar(48 + c);
					putchar(48 + d);
					if (a == 9 && b == 8 && c == 9 && d == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
