#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to hold the attributes of dogs
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void print_dog(struct dog *d);
/**
 * dog_t - typedef for the dog structure
 */
typedef struct dog dog_t;
#endif
