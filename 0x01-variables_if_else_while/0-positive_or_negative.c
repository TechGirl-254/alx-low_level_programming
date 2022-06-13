#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assigns a random number to variable n,
 *
 * Return: Always gives 0 after successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
