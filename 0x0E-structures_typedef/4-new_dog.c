#include <stdlib.h>
#include "dog.h"
/**
 * new_dog-creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: a pointer to a variable of type struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_length = 0, owner_length = 0, i;

	if (!name || !owner || age < 0)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
	{
		owner_length += 1;
	}
	newDog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
	{
		newDog->owner[i] = owner[i];
	}
	newDog->owner[i] = '\0';
	for (i = 0; name[i]; i++)
	{
		name_length += 1;
	}
	newDog->name = malloc(sizeof(char) * (name_length + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->owner);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		newDog->name[i] = name[i];
	}
	newDog->name[i] = '\0';
	newDog->age = age;
	return (newDog);
}
