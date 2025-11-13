#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free la structure
 * @d: pointeur vers la structure à afficher
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
