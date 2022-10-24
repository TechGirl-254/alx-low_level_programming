#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a node
 * at a particular index on a doubly linked list
 *
 * @h: A pointer to the head pointer of the list
 * @idx: The index where the node will be added
 * @n: The data of the new node
 *
 * Return: The address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *ptr = *h;
	dlistint_t *ptr3 = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);
	if (!ptr3)
		return (NULL);

	ptr3->n = n;
	i = 0;

	while (ptr != NULL && i != idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == idx)
	{
		ptr3->next = ptr->next;
		ptr3->prev = ptr;
		ptr->next = ptr3;
	}

	if (ptr == NULL && i != idx)
		return (NULL);
	return (ptr3);
}
