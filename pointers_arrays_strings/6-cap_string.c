#include "main.h"

/**
 * cap_string - met en majuscule la première lettre de chaque mot
 * @s: chaîne à modifier
 *
 * Return: le même pointeur s
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
else if ((s[i - 1] == ' ' || s[i - 1] == '\t' ||
s[i - 1] == '\n' || s[i - 1] == ',' ||
s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' ||
s[i - 1] == '"' || s[i - 1] == '(' ||
s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}') &&
(s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
