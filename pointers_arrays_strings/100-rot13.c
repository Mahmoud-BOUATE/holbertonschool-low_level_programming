#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @str: pointeur
 * Return: count.
 */
char *rot13(char *str)
{
int i = 0, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (str[i] != '\0')
{
j = 0;
while (a[j] != '\0')
{
if (a[j] == str[i])
{
str[i] = b[j];
break;
}
j++;
}
i++;
}
return (str);
}
