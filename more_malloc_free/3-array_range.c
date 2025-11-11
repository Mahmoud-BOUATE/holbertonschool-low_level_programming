#include "main.h"
#include <stdlib.h>
/**
 * *array_range -  function that creates an array of integers
 * @min: nombre le plus petit de tableau
 * @max: nombre le plus grand
 * Return: pointeur vers la zone mémoire allouée
 */
int *array_range(int min, int max)
{
int *array;
int mem;
int i;
if (min > max)
return (NULL);
mem = max - min + 1;
array = malloc(sizeof(int) * mem);
if (array == NULL)
return  (NULL);
for (i = 0; i < mem; i++)
{
array[i] = array[i] + 1;
}
return (array);
}
