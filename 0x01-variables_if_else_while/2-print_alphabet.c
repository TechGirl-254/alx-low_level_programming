#include <stdio.h>

/**
 * main - This prints out the lowercase letters of the alphabet
 *
 * Return: Always give 0 when the execution is successful
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
