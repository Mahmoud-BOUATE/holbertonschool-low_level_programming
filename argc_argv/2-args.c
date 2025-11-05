#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the program name followed by a new line
 * @argc: number of arguments (unused)
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}



