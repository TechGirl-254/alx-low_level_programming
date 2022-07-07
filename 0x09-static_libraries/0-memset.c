#include "main.h"

/**
 * _memset - The function that fills memory witha  constant byte
 *
 * @s: The string whose bytes are to be copied
 * @b: The constant byte to be copied
 * @n: The number of bytes to be copied
 *Return: Always gives the pointer to s when successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;
	return (s);
}
