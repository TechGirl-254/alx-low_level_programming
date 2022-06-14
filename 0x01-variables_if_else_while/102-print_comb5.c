#include <stdio.h>

/**
 * main - This prints all combinations of 2 digits with space
 *
 * Return: Always gives 0 when the execution is successful
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (n2 > n1)
			{
				putchar(n1);
				putchar(32);
				putchar(n2);
				if ((n1 != 56) || (n2 != 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
