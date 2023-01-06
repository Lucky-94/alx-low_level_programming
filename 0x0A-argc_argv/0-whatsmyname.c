/**
 * main-main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
