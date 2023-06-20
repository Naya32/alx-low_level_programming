#include <stdio.h>


/**
 * init_dog - initializes a struct dog.
 * @name: pointer to a string for the name of a dog.
 * @age: age of dog.
 * @owner: pointer to a string for owner of a dog.
 * @d: pointer to the struct dog.
 *
 * description: the struct dog contains information about a dog.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
