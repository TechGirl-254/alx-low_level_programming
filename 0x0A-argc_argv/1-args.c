#include <stdio.h>

/**
 * main - Checks the code
 *
 * @argc: An int variable storing the number of arguements in the program
 * @argv: A character array storing the program's strings
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
