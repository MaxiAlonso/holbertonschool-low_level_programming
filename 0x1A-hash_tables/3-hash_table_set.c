#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * Value must be duplicated and can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL, *traverse = NULL;
	char *value_cpy;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	if (ht->array[index] != NULL)
	{
		traverse = ht->array[index];
		while (traverse != NULL)
		{
			if (strcmp(traverse->key, key) == 0)
			{
				traverse->value = value_cpy;
				return (1);
			}
			traverse = traverse->next;
		}
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = (char *)key, new->value = value_cpy;
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = (char *)key;
		new->value = value_cpy;
		new->next = NULL;
		ht->array[index] = new;
	}
	return (1);
}
