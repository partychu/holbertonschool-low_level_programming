#include "hash_tables.h"

/**
 * hast_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if succeeded, 0 otherwise
 */

int hast_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_node, *new_node;
	unsigned long int idx = 0;

	idx = key_index((const unsigned char *)key, ht->size);

	h_node = ht->array[idx];
	
	return (1);
}
