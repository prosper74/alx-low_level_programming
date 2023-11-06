#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: variable that holds the dogs name
 * @age: variable that holds the dog age
 * @owner: variable that holds the dog owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
