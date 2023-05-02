#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees linked list
 * @head: list_t points a list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	free(head->str);
	free(head);
	temp = head->next;
	head = temp;
	}
}
