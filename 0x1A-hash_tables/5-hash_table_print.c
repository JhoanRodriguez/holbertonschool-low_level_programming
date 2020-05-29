#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int x;
    hash_node_t *tmp;

    printf("{");
    for (x = 0; x < ht->size; x++)
    {
        tmp = ht->array[x];
        if (tmp != NULL)
        {
            printf("'%s': '%s'", tmp->key, tmp->value);
            while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
        }
    }
    printf("}\n");
}