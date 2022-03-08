#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 ** _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: dest
 **/

char *_strcpy(char *dest, char *src);

/**
 * *new_dog -  creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: pointer to newdog or null if function fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}

/**
 ** _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
