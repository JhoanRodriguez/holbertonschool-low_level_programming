#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;
	unsigned int counter = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (tmp != NULL && counter < idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}

	if (!tmp && i == idx)
		return (add_dnodeint_end(h, n));
	else if (tmp)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		tmp->prev->next = new;
		new->prev = tmp->prev;
		tmp->prev = new;
		new->next = tmp;
		return (new);
	}
	return (new);
}
