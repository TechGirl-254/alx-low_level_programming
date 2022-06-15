#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every chanarcter of a string starting with the first
 *
 * @str: The string to be printed
 *
 * Return: It returns nothing
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
