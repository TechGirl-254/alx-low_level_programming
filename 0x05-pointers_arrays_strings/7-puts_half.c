#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 *
 * @str: Is the string to be printed
 *
 * Return: Gives no value
 */
void puts_half(char *str)
{
	int x;
	int y;
	int i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
