#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This assigns the value n to any random number
 *
 * Return: Always give 0 when excetuion is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("and is greater than 5\n");
	if (n == 0)
		printf("and is 0\n");
	if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
