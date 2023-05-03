#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: linked list of type listint_t to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
