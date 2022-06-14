#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets ten times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int al;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
