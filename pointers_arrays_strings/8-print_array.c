#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the lenght of a string
 * @s:  Pointeur
 *
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