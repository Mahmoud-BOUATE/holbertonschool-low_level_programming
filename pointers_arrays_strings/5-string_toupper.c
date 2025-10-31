#include "main.h"
#include <ctype.h>
#include <stddef.h>
/**
 * string_toupper - convertit une chaîne en majuscules
 * @str: la chaîne à convertir
 *
 * Retourne le même pointeur str (ou NULL si str est NULL).
 *Return: str
 */
char *string_toupper(char *str)
{
int i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}
