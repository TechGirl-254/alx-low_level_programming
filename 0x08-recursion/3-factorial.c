#include "main.h"

/**
 * factorial - Evaluates the factorial of a given number
 *
 * @n: The number whose factorial is evaluated
 *
 * Return: An integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
