#include <stdlib.h>
#include "main.h"

/**
* *create_array - function that creates an array of chars
* @size: la taille de tableau
* @c: le caractère à remplir de le tableau
* Return: return le tableau
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = 0;
if (size == 0)
{
return (NULL);
}

array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size ; i++)
{
*(array + i) = c;
}
return (array);
free(array);
}
