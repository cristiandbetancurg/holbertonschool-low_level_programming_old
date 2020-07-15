#include "dog.h"
#include <stdio.h>
/**
 * init_dog -  initialize a variable 
 * @d: struct dog type
 * @name: char the name dog
 * @age: float the age dog
 * @owner: char the owner dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
