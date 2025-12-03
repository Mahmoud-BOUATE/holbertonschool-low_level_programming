#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - une focntion pour créer un ficher
 * @filename: nom du fichier à créer
 * @text_content: contenue à écrire
 *
 * Return: nombre réel de lettres lues et affichées, ou 0 en cas d'erreur
 */
int create_file(const char *filename, char *text_content)
{
int fd, count, nb_ecrits;
char *ptr;
if (filename == NULL)
return (-1);
count = 0;
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
ptr = text_content;
while (*ptr != '\0')
{
count++;
ptr++;
}
nb_ecrits = write(fd, text_content, count);
if (nb_ecrits != count)
{
close(fd);
return (-1);
}
}
if (close(fd) == -1)
return (-1);
return (1);
}
