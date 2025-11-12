#include <stdio.h>
#include "dog.h"
/**
 * print_dog - afficher la structure dog
 * @d: pointeur vers la structure à afficher
 */
void print_dog(struct dog *d)
{
if (d->name == NULL || d->owner == NULL)
printf("(nil)");
if (d == NULL)
return;
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
