#include "lists.h"
/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */
int pop_listint(listint_t **head)
{
	int i;

	listint_t *deleted_node;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	deleted_node = *head;
	next_node = (*head)->next;

	i = deleted_node->n;
	*head = next_node;
	free(deleted_node);

	return (i);
}
