#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - functiojn that concatenates two strings
 * @n: nombre d'octets à allouer
 * @s1: string number 1
 * @s2: string number 2
 * Return: pointeur vers la zone mémoire allouée
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
int i, j;
unsigned int counts1, counts2, count, x;
if (s1 == NULL || s2 == NULL)
s1 = "", s2 = "";
while (s1[counts1] != '\0')
counts1++;
while (s2[counts2] != '\0')
counts2++;
count = counts1 + counts2 + 1;
s = malloc(sizeof(char) * count);
if (s == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
s[i] = s1[i];
i++;
}
j = 0;
if (counts2 <= n)
{
while (s2[j] != '\0')
{
s[i] = s2[j];
j++;
i++;
}
}
else
{
for (x = 0; x < n && s2[j] != '\0'; x++)
{
s[i] = s2[j];
j++;
i++;
}
}
s[counts1 + counts2] = '\0';
return (s);
}
