#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	unsigned int aux = 0;
	listint_t *ptr, *ptrp, *new;

	ptr = *head;
	ptrp = *head;

	if (*head == NULL)
		return (-1);

	while (ptr != NULL)
	{
		aux++;
		ptr = ptr->next;
	}

	if (index > aux)
		return (-1);
	ptr = *head;
	if (index != 0)
	{
		for (i = 0; i < index; i++)
			ptr = ptr->next;
		for (i = 0; i < index - 1; i++)
			ptrp = ptrp->next;
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (-1);
		ptrp->next = ptr->next;
		free(ptr);
		return (1);
	}
	else
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
}
