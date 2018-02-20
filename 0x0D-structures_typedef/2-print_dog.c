#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 *
 * @d: dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)");
	else
		
		printf("Name: %s\n",d->name);
	printf("Age: %f\n");
	if (d->owner == 0)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n",d->owner);
}
