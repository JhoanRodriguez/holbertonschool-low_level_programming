#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index of a `dlistint_t` LL
 * @head: double pointer to head of LL
 * @index: index position to remove from LL
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int counter = 0;

	if (!head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	
	while (tmp != NULL && counter < index - 1)
	{
		tmp = tmp->next;
		counter++;
	}

	tmp->next = tmp->next->next;
	tmp->next->prev = tmp;
	free(tmp);
	return (1);
}
