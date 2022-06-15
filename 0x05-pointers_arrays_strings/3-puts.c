#include "main.h"

/**
 * _puts - Prints a string folowed by new line
 *
 * @str: A parameter assigned to _puts
 *
 * Return: Empty
 */
void _puts(char *str)
{
	for (; *str != '0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
