#include <stdlib.h>
#include "dog.h"
/**
 * free_dog-frees dogs
 * @d: pointer to a varible of type struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
