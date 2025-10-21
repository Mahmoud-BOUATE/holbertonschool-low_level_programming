#include <stdio.h>
/**
* main - Fonction
*
* Declaration d'une chaine de caractère de type char et int
* Affichage des aphabet en lowercase de a-f et les chiffres de 0-9
*
* Return: retourne 0 si code valide
*/
int main(void)
{
int i;
char j;
for(i = 0; i <= 9; i++)
{
putchar('0'+ i);
}
for(j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return(0);
}