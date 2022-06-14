#include <stdio.h>

/**
 * main - This prints lowercase alpphabets in reverse
 *
 * Return: Always give 0 when excution is successful
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
