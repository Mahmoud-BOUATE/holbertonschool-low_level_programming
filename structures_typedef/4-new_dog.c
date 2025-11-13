#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_cpy;
char *owner_cpy;
int count1, count2;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
count1 = 0;
while (name[count1] != '\0')
count1++;
name_cpy = malloc(sizeof(char) * (count1 + 1));
if (name_cpy == NULL)
{
free(dog);
return (NULL);
}
strcpy(name_cpy, name);
count2 = 0;
while (owner[count2] != '\0')
count2++;
owner_cpy = malloc(sizeof(char) * (count2 + 1));
if (owner_cpy == NULL)
{
free(name_cpy);
free(dog);
return (NULL);
}
strcpy(owner_cpy, owner);

dog->name = name_cpy;
dog->age = age;
dog->owner = owner_cpy;

return (dog);
}
