#include "dog.h"

/**
 * init_dog - Initials of a dog
 * struct dog - A structure of a dog
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
