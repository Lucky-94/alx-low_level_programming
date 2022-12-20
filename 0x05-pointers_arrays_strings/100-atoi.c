#include "main.h"

/**
 * _atoi-converts string to integer
 * @s: string to be converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int sign;
	int num;

	num = 0;
	sign = 1;
	do
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}while (*s++);
	num = sign * num;
	return(num);
}
