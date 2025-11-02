#include "main.h"

/**
 * print_number - affiche un entier avec _putchar
 * @n: entier à afficher
 */
void print_number(int n)
{
    /* Affiche le signe une seule fois si n est négatif */
    if (n < 0)
    {
        _putchar('-');
        if (n / 10 == 0)
        {
            _putchar('0' - (n % 10));
            return;
        }
        n = -n; /* On rend n positif pour continuer la récursion sans réafficher '-' */
    }

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}
