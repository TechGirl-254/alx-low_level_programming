#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - A fundtion that frees the nodes of a linked list
 * @head: A pointer to the first node of the linked list
 *
 * Return: Returns a void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);

		ptr = NULL;
	}
}
