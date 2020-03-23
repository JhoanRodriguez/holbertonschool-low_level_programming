#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked list
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int aux = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		aux++;
		ptr = ptr->next;
	}

	if (index > aux)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
