#include "dog.h"

/**
 * init_dog - this function initializes a variable
 * of struct dog type
 * @d: the dog struct
 * @name: dog name
 * @age: age of the dog
 * @owner: the dog owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
