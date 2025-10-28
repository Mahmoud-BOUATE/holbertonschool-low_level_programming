#include "main.h"

/**
 * rev_string - inverse le contenu d'une chaîne de caractères
 * @s: chaîne à inverser
 */
void rev_string(char *s)
{
    int i = 0, j;
    char temp;
    while (s[i] != '\0')
        i++;

    j = i - 1;  
    for (i = 0; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
