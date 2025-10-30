#include "main.h"
#include <string.h>
/**
 * _strncat this fonction concatenates two strings
 * @dest: Tableau contenant la chaine de caractère 'Hello'
 * @src: Tableau contenant la chaine de caractère 'World!'
 * Return: Tableau contanant la chaine de caratère 'Hello world!'
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
if (j < n)
dest[i] = src[j];
j++;
i++;
}
return (dest);
}