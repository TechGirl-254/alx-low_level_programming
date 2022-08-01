#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a structure defining three elements
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
