#include "main.h"
#include <string.h>

/**
 * _strlen - Gets the length of a string
 *
 * @s: string pointer passed to this function
 *
 * Return: Returns the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
