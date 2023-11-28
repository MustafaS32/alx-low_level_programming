#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the dogs
 * @d: the free dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
