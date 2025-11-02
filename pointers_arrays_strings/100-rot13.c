#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - function that copies the strinf
 * @dest:  variable
 * @src: pointeur
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