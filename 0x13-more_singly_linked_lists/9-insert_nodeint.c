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
	listint_t *ptrindex, *ptrnew;

	if (head == NULL)
		return (0);

	ptrindex = get_nodeint_at_index(*head, index);
	ptrnew = add_nodeint (&ptrindex, n);
	return (ptrnew);
}
/**
 * add_nodeint - add a new node at the beginning of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;
	return (new);
}
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
