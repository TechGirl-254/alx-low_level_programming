#include <stdio.h>
#include <stdlib.h>

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
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
