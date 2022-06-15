#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 *
 * Return: Doesn't return anything
 */
void rev_string(char *s)
{
	char tmp;
	int i;
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;
	while (s[length1] != '\0')

		length1++;
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
