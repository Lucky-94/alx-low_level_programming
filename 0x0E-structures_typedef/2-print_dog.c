#include <stdio.h>
#include "dog.h"
/**
 * print_dog-prints a struct dog
 * @d: pointer to the variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: nil\n");
		if (d->owner == NULL)
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else if (d == NULL)
		return;
}
