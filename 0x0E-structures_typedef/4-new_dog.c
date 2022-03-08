#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog -  creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: pointer to newdog or null if function fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
