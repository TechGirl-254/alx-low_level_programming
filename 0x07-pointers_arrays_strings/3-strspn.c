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
	unsigned int count = 0;
	int j;
	int i = 0;

	while (s[i] != '\0')
		i++;

	j = 0;

	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
			count++;
		else
			break;
	}
	j++;

	return (count);
}
