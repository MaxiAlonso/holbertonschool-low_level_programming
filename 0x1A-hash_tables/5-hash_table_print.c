#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *traverse;
	unsigned long int i;
	char *c = "";

	if (ht == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			traverse = ht->array[i];
			while (traverse != NULL)
			{
				printf("%s'%s': '%s'", c, traverse->key, traverse->value);
				c = ", ";
				traverse = traverse->next;
			}
		}
	}
	printf("}\n");
}
