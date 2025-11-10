#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *str_concat - function that that concatenates two strings
* @s1: chaine numéro 1
* @s2: chaine numéro 2
* Return: pointer to the duplicated string
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int counts1, counts2, count;
int i, j;
counts1 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[counts1] != '\0')
{
counts1++;
}
counts2 = 0;
while (s2[counts2] != '\0')
{
counts2++;
}
count = counts1 + counts2 + 1;
s = malloc(sizeof(char) * count);
if (s == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
s[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
s[i] = s2[j];
j++;
i++; 
}
s[counts1 + counts2] = '\0';
return (s);
free(s);
}
