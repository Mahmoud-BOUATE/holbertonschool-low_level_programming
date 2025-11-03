#include "main.h"
#include <string.h>
/**
 * _memcpy - function that fills memory with a constant byte.
 * @dest:  destination
 * @src: source
 * @n: le nombre de case à remplir
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
