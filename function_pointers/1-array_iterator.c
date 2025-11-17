#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator -  exec a funct given as a para on each elemt of an array.
* @array: pointeur qui pointe vers l'adresse du premier élements du tableau
* @size: la taille du tableau
* @action: un pointeur qui pointe vers une fonction qui prend un int
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size ; i++)
{
action(array[i]);
}
}
