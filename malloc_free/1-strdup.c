#include <stdlib.h>
#include "main.h"

/**
* *create_array - function that creates an array of chars
* @size: la taille de tableau
* @c: le caractère à remplir de le tableau
* Return: return le tableau
*/
char *_strdup(char *str)
{
int count;
int i, j;
char *a;

if (str == NULL)
return (NULL);
count = 0;
while (str[i] != '\0')
{
i++;
count ++;
}
a = malloc(sizeof(char)  * (count + 1));
if (str == NULL)
return (NULL);

while (j != '\0')
{
str = a;
j++;
}
return (str);
}