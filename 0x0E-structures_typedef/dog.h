#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a structure defining three elements
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
