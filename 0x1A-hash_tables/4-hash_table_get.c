#include "hash_tables.h"

/**
 * hash_table_get - retrieves a values associated with a key
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pointer;
	unsigned long int idx;

	if (key == NULL || ht == NULL || strcmp(key, "") == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	pointer = ht->array[idx];

	while (pointer != NULL)
	{
		if (strcmp(key, pointer->key) == 0)
			return (pointer->value);
		pointer = pointer->next;
	}
	return (NULL);
}
