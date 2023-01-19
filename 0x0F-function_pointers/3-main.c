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
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = argv[2];
	if ((*o != '+' && *o != '-' && *o != '*' && *o != '/' && *o != '%') || *(o + 1))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' && *argv[3] == '0') || (*o == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (get_op_func(o))(num1, num2);
	printf("%d\n", result);
	return (0);
}
