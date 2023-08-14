#include "dog.h"

/**
 * free_dog - Frees a dog structure
 *
 * @d: Pointer to the dog structure to free
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
