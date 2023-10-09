#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog
 * @name: name of the dog to initialize
 * @age: age of the dog to initialize
 * @owner: owner of the dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
