#include <stdio.h>
/**
* main - Fonction
*
* Declaration varibale entier n
* A chaque exécution, imprime si le nombre stocké dans n
* Positive, negative, ou zero
*
* Return: retourne 0 si code valide
*/
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (str[i] != 'z')
{
putchar(str[i]);
i++;
}
putchar('\n');

return (0);
}

