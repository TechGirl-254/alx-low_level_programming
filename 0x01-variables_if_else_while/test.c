#include <stdio.h>

/**
 * main - This prints all combinations of single numbers
 *
 * Return: Always gives 0 when execution is successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
