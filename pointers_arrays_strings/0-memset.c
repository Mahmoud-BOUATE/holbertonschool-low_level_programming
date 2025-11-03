#include "main.h"
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s:  Pointeur
 * @b: valeur à mettre dans chaquer case (1 octets)
 * @n: le nombre de case à remplir
 * Return: count.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
