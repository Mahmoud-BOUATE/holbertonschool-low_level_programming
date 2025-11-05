#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the program name followed by a new line
 * @argc: number of arguments (unused)
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc , char **argv)
{
(void)argv;
printf ("%d\n", argc - 1);
return (0);
}


