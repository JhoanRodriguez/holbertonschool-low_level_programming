#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, end;
	hash_node_t *tmp;

	printf("{");
	for (x = 0, end = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		if (tmp != NULL)
		{
			if (end != 0)
				printf(",");

			printf("'%s': '%s'", tmp->key, tmp->value);
			while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
			end = 1;
		}
	}
	printf("}\n");
}
