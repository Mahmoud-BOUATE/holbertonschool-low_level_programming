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
unsigned int *p1;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p1 = malloc(size * nmemb);
i = 0;
for (i = 0; i < nmemb; i++)
{
p1[i] = 0;
}
if (p1 == NULL)
return (NULL);
return (p1);
}
