#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the lenght of a string
 * @s:  Pointeur
 *
 * Return: count.
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while(src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}