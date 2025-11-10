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
int j;
char *a;
if (str == NULL)
return (NULL);
count = 0;
while (str[count] != '\0')
{
count++;
}
a = malloc(sizeof(char)  * (count + 1));
if (a == NULL)
return (NULL);
j = 0;
for (j = 0; j < count; j++)
{
a[j]  = str[j];
}
a[count] = '\0';

return (a);
free(a);
}