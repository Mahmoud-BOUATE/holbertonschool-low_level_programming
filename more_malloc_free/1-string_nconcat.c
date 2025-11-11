#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - functiojn that concatenates two strings
 * @n: nombre d'octets à allouer
 * @s1: string number 1
 * @s2: string number 2
 * Return: pointeur vers la zone mémoire allouée
 */
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int counts1 = 0, counts2 = 0, i = 0, j = 0;

if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (s1[counts1] != '\0')
counts1++;
while (s2[counts2] != '\0')
counts2++;
if (n > counts2)
n = counts2;

s = malloc(sizeof(char) * (counts1 + n + 1));
if (!s)
return (NULL);
for (i = 0; i < counts1; i++)
s[i] = s1[i];
for (j = 0; j < n; j++)
s[i + j] = s2[j];
s[i + j] = '\0';
return (s);
}
