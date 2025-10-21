#include <stdio.h>
/**
* main - Fonction
*
* Declaration d'une chaine de caractère de type char
* Affichage des aphabet en lowercase
* Affichage de chaque lettre par ligne
*
* Return: retourne 0 si code valide
*/
int main(void)
{
char alphabetmin[] = "abcdefghijklmnopqrstuvwxyz";
char alphabetmaj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int i = 0;
while (alphabetmin[i] != '\0')
{
putchar(alphabetmin[i]);

i++;
}
while (alphabetmaj[i] != '\0')
{

putchar(alphabetmaj[i]);
i++;
}
putchar('\n');

return (0);
}

