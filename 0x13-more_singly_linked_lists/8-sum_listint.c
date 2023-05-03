#include "lists.h"

/**
 * sum_listint - function calculating the sum of all data in a listint_t list
 * @head: the first node within the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
