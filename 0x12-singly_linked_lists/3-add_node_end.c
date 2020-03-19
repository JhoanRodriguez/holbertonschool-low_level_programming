#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *actual;
	int x;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
		continue;

	new->len = x;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	actual = *head;

	while (actual->next != NULL)
	{
		actual = actual->next;
	}

	actual->next = new;
	return (new);
}
