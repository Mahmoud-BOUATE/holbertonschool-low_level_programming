#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: chaine à comparer 
 * @s2 chaine à comparer
 *
 * Return: pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
i++;
else if (s1[i] != s2[i])
break;
}
if (s1[i] == '\0' && s2[i] == '\0')
return (0);
else
return (s1[i] - s2[i]);
}.
