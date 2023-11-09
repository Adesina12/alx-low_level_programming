#include <stdio.h>
#include "dog.h"

/**
 * print_dog - The name of the function
 * @d: The dog structure
 * Return: NILL
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n");
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n");
}
