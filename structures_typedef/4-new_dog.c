#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - creer un nouveau chien
 * @name: non du chien
 * @owner: prop du chien
 * @age: age du pointeur
 *
*Return: retourne d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *copy_name;
char *copy_owner;
int i , j;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);


copy_name = malloc(strlen(name) + 1);
if (copy_name == NULL)
return (NULL);

for (i = 0; name[i]; i++)
copy_name[i] = name[i];

copy_name[i] = '\0';
d->name = copy_name;

copy_owner = malloc(strlen(owner) + 1);
j = 0;
while (owner[j] != '\0')
{
copy_owner[j] = owner[j];
j++;
}
copy_owner[j] = '\0';
d->owner = copy_owner;

d->age = age;
return (d);
}
