#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index -  function that searches for an integer.
* @array: pointeur qui pointe vers l'adresse du premier élements du tableau
* @size: la taille du tableau
* @cmp: un pointeur qui pointe vers une fonction qui prend un int
* Return: return index if cmp diff de 0 return 0 if cmp égal 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (NULL);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
if (cmp(array[i]) == 0)
{
}
}

return (-1);
}
