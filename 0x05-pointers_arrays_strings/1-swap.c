#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
