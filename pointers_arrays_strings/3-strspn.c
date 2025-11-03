#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s:  Pointeur
 * @accept: Pointeur
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int ok = 1;
unsigned int count = 0;
while (s[i] != '\0')
{
j = 0;
ok = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
ok = 1;
break;
}
j++;
}
if (ok == 0)
break;
count++;
i++;
}
return (count);
}

