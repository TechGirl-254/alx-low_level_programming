#include <stdio.h>

/**
 * main - This prints all combinations of single numbers
 *
 * Return: Always gives 0 when execution is successful
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
