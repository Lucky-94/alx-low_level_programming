#include "lists.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * _strlen-returns the length of a string
 * @s: pointer to the string
 * Return: an integer
 */
int _strlen(char *s)
{
	int i, sum = 0;

	for (i = 0; s[i]; i++)
		sum += 1;
	return (sum);
}
/**
 * print_list-prints all the elements of a list_t list
 * @h: pointer to the head of a singly linked list
 * Return: an unsigned int
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr;

	ptr = h;
	if (ptr)
	{
		while (ptr->next)
		{
			if (ptr->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", _strlen(ptr->str), ptr->str);
			ptr = ptr->next;
			counter++;
		}
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(ptr->str), ptr->str);
		counter++;
	}
	return (counter);
}
