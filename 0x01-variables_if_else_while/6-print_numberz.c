#include <stdio.h>

/**
 * main - This prints all single digit numbers from 0 to 9
 *
 * Return: Always give 0 when execution is sucessful
 */
int main(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		putchar(no);
	}

	putchar('\n');

	return (0);
}
