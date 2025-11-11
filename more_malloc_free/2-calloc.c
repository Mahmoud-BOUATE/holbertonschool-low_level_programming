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
void *ptr;
unsigned int total_size;
unsigned int i;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
if (size != 0 && total_size / size != nmemb)
return (NULL);

ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

p = ptr;
for (i = 0; i < total_size; i++)
p[i] = 0;
return (ptr);
}
