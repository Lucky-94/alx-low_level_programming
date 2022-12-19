#include "main.h"

/**
 * rev_string-prints a string in reverse order
 * _putchar-prints to stdout
 * @s: string to be printed in reverse order
 */
void rev_string(char *s)
{
	int i;
	int counter = 0;
	int j;
	char *start_ptr;
	char *end_ptr;
	char ch;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		counter++;
	}
	j = counter - 1;
	start_ptr = s;
	end_ptr = s + j;

	for (i = 0; i <= (j) / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = ch;

		start_ptr++;
		end_ptr--;
	}
}
