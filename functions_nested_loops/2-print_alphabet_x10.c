#include "main.h"
#include <unistd.h>
/**
* print_alphabet - prints the lowercase alphabet
* Boucle pour répéter les alphabets 10 fois
* Retour à la ligne
*/
void print_alphabet_x10(void)
{
char i;
int x;
for (x = 0; x < 10; x++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}



