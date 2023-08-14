#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: a dog structure.
 * @name: a name of the dog.
 * @age: an age of the dog.
 * @owner:an owner of the dog.
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
