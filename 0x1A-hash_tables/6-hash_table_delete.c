#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to be deleted
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *traverse = NULL, *next = NULL;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		traverse = ht->array[i];
		if (traverse != NULL)
		{
			while (traverse != NULL)
			{
				next = traverse->next;
				if (traverse->key)
					free(traverse->key);
				if (traverse->value)
					free(traverse->value);
				free(traverse);
				traverse = next;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
