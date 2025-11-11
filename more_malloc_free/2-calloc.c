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
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
void *p1 = malloc(size * nmemb);
if (p1 == NULL)
return (NULL);
i = 0;
for (i = 0; i < nmemb; i++)
{
p1[i] = 0;
}
return (p1);
}
