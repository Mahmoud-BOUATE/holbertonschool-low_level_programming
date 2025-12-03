#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - lit un fichier texte et l'affiche sur la sortie standard
 * @filename: nom du fichier à lire
 * @letters: nombre de lettres à lire et afficher
 *
 * Return: nombre réel de lettres lues et affichées, ou 0 en cas d'erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *tampon;
ssize_t nb_lus, nb_ecrits;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

tampon = malloc(sizeof(char) * letters);
if (tampon == NULL)
{
close(fd);
return (0);
}

nb_lus = read(fd, tampon, letters);
if (nb_lus == -1)
{
free(tampon);
close(fd);
return (0);
}

nb_ecrits = write(STDOUT_FILENO, tampon, nb_lus);
free(tampon);
close(fd);

if (nb_ecrits != nb_lus)
return (0);

return (nb_ecrits);
}

