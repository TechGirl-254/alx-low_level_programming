#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - A function that adds a nide at the start of
 * a doubly linked list.
 *
 * @head: A pointer to the pointer of the fist node in the list
 * @n: The data value of the new node
 *
 * Return: The address of the new node or NUll if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;

		*head = node;
	}

	else
	{
		(*head)->prev = node;
		node->next = *head;

		*head = node;
	}
	return (node);
}
