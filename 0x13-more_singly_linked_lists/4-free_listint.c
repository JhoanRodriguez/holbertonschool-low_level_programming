#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->next);
		free (head);
		head = ptr->next;
	}
}
