#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: input pointer to structure dog
 * @name: input to the name of the dog
 * @age: dog age
 * @owner: input for owner of dog
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
