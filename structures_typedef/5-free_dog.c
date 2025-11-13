#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - afficher la structure dog
 * @d: pointeur vers la structure à afficher
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free (d->owner);
free(d);
}