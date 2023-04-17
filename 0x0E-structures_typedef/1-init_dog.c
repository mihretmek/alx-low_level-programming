#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: dog address
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct do *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
