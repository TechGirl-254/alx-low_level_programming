#include "main.h"

/**
 * *_strcat - Appends src string to the dest string
 *
 * this overwrites the terminating null byte at dest
 *
 * and adds a terminating null byte
 * @dest: The first parameter
 * @src: The second parameter
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
