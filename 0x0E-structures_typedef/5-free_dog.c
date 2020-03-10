#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit (0);
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
