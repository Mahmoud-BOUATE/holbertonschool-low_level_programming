#include "main.h"
#include <ctype.h>
#include <stddef.h>
/**
 * leet - convertit quelques lettres en chiffres
 * @s: la chaîne à convertir
 *
 * Retourne le même pointeur str (ou NULL si str est NULL).
 *Return: str
 */
char *leet(char *s)
{
char tab1[] = "aAeEoOtTlL";
char tab2[] = "7733007711";
int i = 0;
int j;
while (s[i] != '\0')
{
j = 0;
while (tab1[j] != '\0' && tab2[j] != '\0')
{
if (s[i] == tab1[j])
{
s[i] = tab2[j];
break;
}
j++;
}
i++;
}
return (s);
}
