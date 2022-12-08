/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	puts("Size of a char: %d byte(s)", sizeof(char));
	puts("Size of an int: %d byte(s)", sizeof(int));
	puts("Size of a long int: %d byte(s)", sizeof(int));
	puts("Size of a long long: %d byte(s)", sizeof(long));
	puts("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
