#include "main.h"
/**
 * _strlen_recursion-returns the length of a string
 * @s: test string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check-checks if a string is a palindrome
 * @begin: start of the string
 * @end: end of the string
 * @length: length of the string
 * @c: length counter
 * Return: 2 or 9
 */
int check(char *begin, char *end, int length, int c)
{
	if (*begin != *end)
		return (0);
	if (c == length / 2)
		return (1);
	return (check(begin + 1, end - 1, length, c + 1));
}
/**
 * is_palindrome-checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 or 0;
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	char *begin = s;
	char *end = (s + length - 1);

	return (check(begin, end, length, 1));
}
