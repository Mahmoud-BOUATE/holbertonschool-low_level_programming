#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the lenght of a string
 * @s:  Pointeur
 *
 * Return: count.
 */
int _strlen(char *s)
{
int count;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
