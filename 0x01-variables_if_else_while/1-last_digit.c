#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
*main - entry point
*Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit if %d is and is 0\n");
	}
	else if ((n < 6) && (n != 0))
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	return (0);
}
