#include "main.h"
#include <string.h>
/**
 * _strcat - function that returns the lenght of a string
 * @dest: Tableau contenant la chaine de caractère 'Hello'
 * @src: Tableau contenant la chaine de caractère 'World!'
 * Return: Tableau contanant la chaine de caratère 'Hello world!'
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
