#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire et termine le process si échec
 * @b: nombre d'octets à allouer
 *
 * Return: pointeur vers la zone mémoire allouée
 *         si malloc échoue, termine le programme avec le statut 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
