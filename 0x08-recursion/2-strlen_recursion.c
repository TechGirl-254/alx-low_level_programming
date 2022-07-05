#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string recursively
 *
 * @s: the string whose length is calculated
 * Return: Lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
