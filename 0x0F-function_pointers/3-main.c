#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main-performs a simple operation
 * @argc: argument count
 * @argv: argument vector
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *opt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opt = argv[2];
	if (*opt != '+' && *opt != '-' && *opt != '*' && *opt != '/' && *opt != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opt == '/' && *argv[3] == '0') || (*opt == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (get_op_func(opt))(num1, num2);
	printf("%d\n", result);
	return (0);
}
