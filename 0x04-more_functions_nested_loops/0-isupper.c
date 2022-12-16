#include "main.h"
/**                                          *                                           * Return: 1 if input is uppercase, 0 if lowercase.
 */

int main(void)
{
	int _isupper(int c)
	{
        	if(c <= 'z' && c >= 'a')
                	return (0);
        	else if(c <= 'Z' && c >= 'A')
                	return (1);
	}
}
