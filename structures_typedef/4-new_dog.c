#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - créer un nouveau chien
 * @name: nom du chien
 * @owner: propriétaire du chien
 * @age: âge du chien
 * Return: pointeur vers la nouvelle structure dog_t, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *copy_name, *copy_owner;
int i, j;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
if (name != NULL)
{
copy_name = malloc(strlen(name) + 1);
if (copy_name == NULL)
{
free(d);
return (NULL);
}
for (i = 0; name[i]; i++)
copy_name[i] = name[i];
copy_name[i] = '\0';
d->name = copy_name;
}
else
d->name = NULL;
if (owner != NULL)
{
copy_owner = malloc(strlen(owner) + 1);
if (copy_owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for  (j = 0 ; owner[j]; j++)
copy_owner[j] = owner[j];
copy_owner[j] = '\0';
d->owner = copy_owner;
}
else
d->owner = NULL;
d->age = age;
return (d);
}
