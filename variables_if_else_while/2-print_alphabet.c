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
    char c;

    for (c = 'A'; c <= 'Z'; c++)
    {
        putchar(c);
    }
    putchar('\n');

    return 0;
}

