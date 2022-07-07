#include "main.h"

/**
 * _memcpy - Copies a memory area
 *
 * @dest: The memory area being copied to
 * @src: The memory are being copied from
 * @n: The number of bytes being copied
 *
 * Return: The pointer  to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		src[i] = dest[i];
	return (dest);
}
