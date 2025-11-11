#include "main.h"
#include <stdlib.h>
/**
 * *_calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: nombre d'élément du tableau
 * @size: la taille en octets
 * Return: pointeur vers la zone mémoire allouée
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p1;
unsigned int i;
size_t total;

if (nmemb == 0 || size == 0)
return (NULL);
if ((size_t)nmemb > SIZE_MAX / (size_t)size)
return (NULL);
total = (size_t)nmemb * (size_t)size;
p1 = malloc(total);
if (p1 == NULL)
return (NULL);
i = 0;
for (i = 0; i < nmemb; i++)
{
p1[i] = 0;
}
return (p1);
}
