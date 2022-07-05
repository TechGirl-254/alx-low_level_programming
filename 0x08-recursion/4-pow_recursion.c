#include "main.h"

/**
 * _pow_recursion - Finds value of a number raised to another recursively
 * @x: The number to be raised
 * @y: The power
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
