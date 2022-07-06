#include <stdio.h>

/**
 * main - Checks the code
 *
 * @argc: An int variable containing the number program's arguements
 * @argv: A character array containg a program's strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("This program's name is: %s\n", argv[i]);
	return (0);
}
