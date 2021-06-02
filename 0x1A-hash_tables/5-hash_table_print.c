#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pointer;
	unsigned long int i;
	int flag;

	if (ht == NULL)
		printf("");

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		pointer = ht->array[i];
		flag = 0;
		while (pointer)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", pointer->key, pointer->value);
			pointer = pointer->next;
			flag = 1;
		}
	}
	printf("}\n");
}
