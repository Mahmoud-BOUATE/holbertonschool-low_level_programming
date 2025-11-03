#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that gets the length of a prefix substring.
 * @s:  Pointeur
 * @accept: Pointeur
 * Return: adresse de pointeur.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (NULL);
}
