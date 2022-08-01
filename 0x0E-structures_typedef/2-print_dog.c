#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the data countained in struct dog on stdout
 * @d: An arguement cointaining the data in struct dog
 * Return: Nothing if d is NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nill)");
	else
		printf("Name: %s\n", d->name);

	printf("Name: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nill)");
	else
		printf("Name: %s\n", d->owner);
}
