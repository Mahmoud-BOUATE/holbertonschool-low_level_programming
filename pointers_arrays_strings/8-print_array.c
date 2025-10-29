#include "main.h"
#include <stdio.h>
/**
 * print_array - function that returns the lenght of a string
 * @n:  variable
 * @a: pointeur
 * Return: count.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
