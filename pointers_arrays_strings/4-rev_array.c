#include "main.h"

/**
 * reverse_array - inverse l'ordre des éléments d'un tableau d'entiers
 * @a: le tableau à inverser
 * @n: le nombre d'éléments dans le tableau
 *
 * Cette fonction échange les éléments du début et de la fin
 * du tableau jusqu'à ce que tous les éléments soient inversés.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;
while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
