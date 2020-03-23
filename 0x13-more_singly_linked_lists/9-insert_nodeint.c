#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	unsigned int aux = 0;
	listint_t *ptr, *ptrp;
	listint_t *new;

	ptr = *head;
	ptrp = *head;

	while (ptr != NULL)
	{
		aux++;
		ptr = ptr->next;
	}

	if (index > aux)
		return (NULL);

	ptr = *head;

	for (i = 0; i <= index; i++)
		ptr = ptr->next;

	for (i = 0; i < index; i++)
		ptrp = ptrp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->next = ptr;
	ptrp->next = new;
	return (new);
}
