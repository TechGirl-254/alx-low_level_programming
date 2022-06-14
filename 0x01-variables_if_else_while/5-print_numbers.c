#include <stdio.h>

/**
 * main - This prints all single digit base 10 numbers
 *
 * Return: Always gives 0 when the execution is successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("Single digit numbers: %d\n", n);
	return (0);
}
