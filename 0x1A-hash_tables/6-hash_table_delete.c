#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h_node, *pointer;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		h_node = ht->array[i];
		while (h_node)
		{
			pointer = h_node->next;
			free(h_node->key);
			free(h_node->value);
			free(h_node);
			h_node = pointer;
		}
	}
	free(ht->array);
	free(ht);
}
