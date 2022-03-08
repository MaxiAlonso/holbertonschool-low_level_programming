#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs.
 * @d:pointer to a dog_t struct
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d);
	}
}
