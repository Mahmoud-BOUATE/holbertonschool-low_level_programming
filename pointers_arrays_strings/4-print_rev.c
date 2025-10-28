#include "main.h"
#include <stdio.h>

/**
 * print_rev - affiche une chaîne de caractères à l’envers
 * @s: pointeur vers la chaîne de caractères à inverser
 *
 * Description: Cette fonction affiche les caractères d’une chaîne
 * dans l’ordre inverse, suivis d’un retour à la ligne.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
