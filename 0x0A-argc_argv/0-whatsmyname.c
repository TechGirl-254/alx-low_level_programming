#include <stdio.h>

/**
 * main - checks the code
 *
 * @argc: It is an interger variable that counts arguements
 * @argv: It is a character array containg arguement strings
 * Return: Always gives 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("This program's name is: %s\n", argv[i]);
	return (0);
}
