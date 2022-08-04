#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches for a string in any set of bytes
 * @s: The haystack
 * @accept: The needle
 *
 * Description My thought process about this is that
 * there's a string(hastack) and within it you can
 * find another smaller string(needle). To find the
 * needle in the haystack, you have to start by
 * finding the first character on the needle among
 * the characters in the haystack.
 *
 * Return: A pointer to the byte in s that matches
 * the byte in accept.
 * otherwise, it returns null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				j++;

				p = &s[i];
			}
			else
				break;
		}
	}
	i++;

	return (p);
}
