#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array on integers
 *
 * @a: Array of integers
 *
 * @n: The number of elements in the array
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
