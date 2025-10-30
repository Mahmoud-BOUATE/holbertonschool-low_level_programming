#include "main.h"

/**
 * reverse_array - inverse l'ordre des éléments d'un tableau d'entiers
 * @a: le tableau à inverser
 * @n: le nombre d'éléments dans le tableau
 *
 * Cette fonction échange les éléments du début et de la fin
 * du tableau jusqu'à ce que tous les éléments soient inversés.
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str [i] = str[i] - 32;
i++;
}
return (str[i]);
}