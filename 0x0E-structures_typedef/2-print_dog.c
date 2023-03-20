#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: The struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("%s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)");
	else
		printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("%s\n", d->owner);
}
