#include "dog.h"

/**
 * init_dog - It initializes a variable of type struct dog
 * @d: The variable pointer of the variable initiaized as struct dog
 * @name: Character variable for name
 * @age: Float variable for age
 * @owner: Character variable for owneer's name
 *
 * Return: It is void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;
	char name;
	float age;
	char owner;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
}
