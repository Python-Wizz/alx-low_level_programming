#include "lists.h"
#include <stdio.h>

/**
 * print_list - A funtion that will print linked list
 * @h: a pointer to the list_t list to be printed
 *
 * Return: the number of nodes which are printed in list as size_t
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (null)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}

	return (s);
}
