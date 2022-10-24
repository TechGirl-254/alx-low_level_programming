#include "lists.h"

/**
 * sum_dlistint - A functions that sums up all integers in a linked list
 * @head: A pointer to the linked list
 *
 * Return: The sum or 0 if the linked list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum;

	if (!head)
		return (0);

	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
