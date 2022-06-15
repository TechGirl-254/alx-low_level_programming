#include <stdio.h>

/**
 * main - Prints the first fisty numbers of the fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int result;
	int i;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%d", a);
		putchar(44);
		putchar(32);
		printf("\n");
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
