#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * open_file_from - opens the source file
 * @file: name of the source file
 *
 * Return: file descriptor on success, exits on error
 */
int open_file_from(char *file)
{
int fd;

fd = open(file, O_RDONLY);
if (fd == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file);
exit(98);
}
return (fd);
}

/**
 * open_file_to - opens or creates the destination file
 * @file: name of the destination file
 *
 * Return: file descriptor on success, exits on error
 */
int open_file_to(char *file)
{
int fd;

fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd == -1)
{
dprintf(2, "Error: Can't write to %s\n", file);
exit(99);
}
return (fd);
}

/**
 * copy_content - copies content from fd_from to fd_to using 1024-byte buffer
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_content(int fd_from, int fd_to)
{
ssize_t r, w;
char buf[1024];

while ((r = read(fd_from, buf, 1024)) > 0)
{
w = write(fd_to, buf, r);
if (w != r)
{
dprintf(2, "Error: Can't write to destination file\n");
close(fd_from);
close(fd_to);
exit(99);
}
}

if (r == -1)
{
dprintf(2, "Error: Can't read from source file\n");
close(fd_from);
close(fd_to);
exit(98);
}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exits with codes 97-100 on errors
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open_file_from(argv[1]);
fd_to = open_file_to(argv[2]);
copy_content(fd_from, fd_to);

if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}
