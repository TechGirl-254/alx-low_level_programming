#include <stdio.h>

/**
 * main - This prints lowecase hexadecimals
 *
 * Return: Always gives 0 when the execution is successful
 */
int main(void)
{
	int ch;
	int letter;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);
	for (letter = 97; letter <= 102; letter++)
		putchar(letter);

	putchar(10);
	return (0);
}
