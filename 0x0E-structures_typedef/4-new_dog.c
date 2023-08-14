#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: a new dog or null if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL || !(age >= 0.0))
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
