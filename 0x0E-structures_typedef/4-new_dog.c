#include "dog.h"
#include <string.h>

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

	newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	newdog->name = strdup(name);
	newdog->age = age;
	newdog->owner = strdup(owner);

	return (newdog);
}
