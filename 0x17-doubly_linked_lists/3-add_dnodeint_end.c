#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - A function that adds a nide at the start of
 * a doubly linked list.
 *
 * @head: A pointer to the pointer of the fist node in the list
 * @n: The data value of the new node
 *
 * Return: The address of the new element or NUll if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = node;
	node->prev = ptr;

	return (node);
}
