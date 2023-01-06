#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int isNumber(char *s);
/**
 * main-prints the sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * isNumber-checks if a character string contains numbers
 * @s: pointer to the character string
 * Return: 1 or 0
 */
int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
