#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -function that adds a new node at the end of a linked list
 * @head: A pointer to that points to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
