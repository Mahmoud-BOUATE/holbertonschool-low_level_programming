#include "main.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
/**
 * *_calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: nombre d'élément du tableau
 * @size: la taille en octets
 * Return: pointeur vers la zone mémoire allouée
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p1;
size_t total;

if (nmemb == 0 || size == 0)
return (NULL);
if ((size_t)nmemb > SIZE_MAX / (size_t)size)
return (NULL);
total = (size_t)nmemb * (size_t)size;
p1 = malloc(total);
if (p1 == NULL)
return (NULL);
memset(p1, 0, total);
return (p1);
}
