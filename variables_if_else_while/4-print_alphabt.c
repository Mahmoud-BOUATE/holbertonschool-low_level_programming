#include <stdio.h>
/**
* main - Fonction
*
* Declaration d'une chaine de caractère de type char
* Affichage des aphabet en lowercase and uppercase
*
* Return: retourne 0 si code valide
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
putchar('\n');
return (0);
}
}