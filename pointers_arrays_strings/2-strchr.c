#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string.
 * @s:  Pointeur
 * @c: character locates
 * Return: character locates
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
s[i + 1] = '\0';
return (s + i);
i++;
}
return ('\n');
}
