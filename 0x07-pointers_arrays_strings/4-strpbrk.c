#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches for a string in any set of bytes
 * @s: The haystack
 * @accept: The needle
 *
 * Return: s (Success) 0 (Not Found)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
