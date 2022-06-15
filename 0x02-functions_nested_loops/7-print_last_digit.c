#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: This is an arguement passed
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		_putchar(x + '0');
	return (x);
}
