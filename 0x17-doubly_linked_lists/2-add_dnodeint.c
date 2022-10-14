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
	dlistint_t *nodeHead;
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	nodeHead = malloc(sizeof(dlistint_t));

	if (nodeHead == NULL)
		return (NULL);

	nodeHead->prev = NULL;
	nodeHead->next = NULL;

	*head = nodeHead;

	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;

	(*head)->prev = ptr;

	*head = ptr;

	ptr = malloc(sizeof(dlistint_t));
	return (*head);
}
