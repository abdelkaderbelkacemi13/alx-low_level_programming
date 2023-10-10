#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a dog
 * @name: the doh's name
 * @age: the dog's age
 * @owner: the dog's owner name
 * @d: dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
