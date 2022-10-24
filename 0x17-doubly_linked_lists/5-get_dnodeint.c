#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a
 * doubly linked list.
 * @head: The poointer to the list
 * @index: The index of the node to be returned, node starts at 0.
 *
 * Return: The node of the list, or null if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	dlistint_t *ptr2;
	unsigned int i;

	i = 0;

	if (ptr == NULL)
		return (NULL);

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (i == index)
		ptr2 = ptr;
	return (ptr2);
}
