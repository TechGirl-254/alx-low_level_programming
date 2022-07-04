#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The tring with the character to be located
 * @c: The character to be located
 *
 * Return: It gives a ponter to s or NULL
 */
char *_strchr(char *s, char c)
{
	while (c)
	{
		s++;
	}
	return (s);
}

