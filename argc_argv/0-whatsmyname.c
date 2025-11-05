#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the program name followed by a new line
 * @argc: number of arguments (unused)
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
return 0;
}

