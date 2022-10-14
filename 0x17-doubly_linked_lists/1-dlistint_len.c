#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - A function that prints all elements of a
 * doubly linked list.
 *
 * @h: A pointer to the fist node of the doubly linked list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	const dlistint_t *ptr;

	ptr = h;

	i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i += 1;
	}
	return (i);
}
