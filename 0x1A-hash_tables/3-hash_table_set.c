#include "hash_tables.h"

hash_node_t *insert_node(hash_node_t **head,
						unsigned long int idx, const char *value, const char *key);

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add to
 * @key: key to add
 * @value: value to store for key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!key || strcmp(key, "") == 0 || !ht || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	insert_node(ht->array, index, value, key);
	return (1);

}
/**
 * insert_node - function to insert a node in a list at given index
 * @head: pointer to the pointer to list
 * @idx: given index to insert node at
 * @value: data to be inserted
 * @key: key
 * Return: the address of new node inserted or NULL
 */
hash_node_t *insert_node(hash_node_t **head,
						unsigned long int idx, const char *value, const char *key)
{
	unsigned int i;
	hash_node_t *next_node, *prev_node, *new_node;

	next_node = prev_node =  *head;
	i = 0;

	while (next_node)
	{
		i++;
		next_node = next_node->next;
	}
	if (idx > i)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key  = strdup(key);
	new_node->value = strdup(value);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	next_node = *head;
	new_node->next = NULL;

	for (i = 0; i < idx; i++)
		next_node = next_node->next;

	for (i = 0; i < idx - 1; i++)
		prev_node = prev_node->next;

	new_node->next = next_node;
	prev_node->next = new_node;
	return (new_node);
}
