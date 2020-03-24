#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a node in a list at given index
 * @head: pointer to the pointer to list
 * @idx: given index to insert node at
 * @n: data to be inserted
 * Return: the address of new node inserted or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev_node, *next_node, *new_node;

	next_node = prev_node = *head;
	i = 0;

	while (next_node)
	{
		i++;
		next_node = next_node->next;
	}
	if (idx > i)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n  = n;
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
