#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: A character to be checked on
 *
 * Return: 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
