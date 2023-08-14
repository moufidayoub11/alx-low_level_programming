#include "dog.h"

/**
 * init_dog - Initialize a dog structure
 *
 * @d: Pointer to the dog structure to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description:
 * This function initializes a dog structure with the given
 * name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
