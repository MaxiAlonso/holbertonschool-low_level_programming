#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **array = NULL;
	unsigned long int i = 0;

	if (size != 0)
	{
		ht = malloc(sizeof(hash_table_t));
		if (ht == NULL)
		{
			return (NULL);
		}
		array = malloc(sizeof(*array) * size);
		if (array == NULL)
		{
			free(ht);
			return (NULL);
		}
		while (i < size)
		{
			array[i] = NULL;
			i++;
		}
		ht->size = size;
		ht->array = array;
	}
	return (ht);
}
