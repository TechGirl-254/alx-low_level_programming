#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - Contains data on name age and owner of a given dog
 * @name: First data set
 * @age: Second data set
 * @owner: Third data set
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *copys(char *s1, char *s2);
#endif
