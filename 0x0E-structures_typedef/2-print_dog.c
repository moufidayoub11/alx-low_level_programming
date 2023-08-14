#include "dog.h"

/**
 * print_dog - Prints a dog structure
 *
 * @d: Pointer to the dog structure to print
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");

	if (!d->age)
		print("Age: (nil)\n");
	else
		print("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
