#include <stdio.h>

/**
 * main - This prints lowercase and uppercase alphabets
 *
 * Return: Always give 0 when the execution is successful
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
