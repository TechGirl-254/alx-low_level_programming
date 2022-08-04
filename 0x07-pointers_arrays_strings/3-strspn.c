#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring
 * by comparing the initial character strings of two character variables
 * @s: Pointer to the first character variable
 * @accept: Pointer to the second character variable
 *
 * Return: An uninitialized int of the number of bytes in prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	unsigned int bytes = (count * (sizeof(char)));
	int i = 0;

	while (*s != '\0')
		i++;
	{
		s[i] = accept[i];
		count++;
	}
	return (bytes);
}
