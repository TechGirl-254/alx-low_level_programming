#include <stdio.h>

/**
 * main - Checks the code
 *
 * @argc: An int variable storing the number of arguements in the program
 * @argv: A character array storing the program's strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
