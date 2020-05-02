#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (head && *head)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		new->prev = NULL;
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
