#include "main.h"

/**
 * *_strcpy - Copies the tring pointed by src
 *
 * including its terminating null byte to the buffer pointed by dest
 *
 * @dest: Destination of the value
 * @src: Value of the source
 *
 * Return: The dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
	return (dest);
}
