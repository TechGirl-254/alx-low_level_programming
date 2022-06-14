#include <stdio.h>

/**
 * main - This prints loweercase characters excluding p and e
 *
 * Return: Always gives 0 when the execution is successful
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if ((ch != 101) && (ch != 112))
		{
			putchar(ch);
		}
		putchar(10);
	}
	return (0);
}
