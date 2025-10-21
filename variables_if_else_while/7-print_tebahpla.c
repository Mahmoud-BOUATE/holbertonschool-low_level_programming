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
char i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');

return (0);
}

