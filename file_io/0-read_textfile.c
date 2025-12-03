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
int descripteur_fichier;
char *tampon;
ssize_t nb_lus, nb_ecrits;

if (filename == NULL)
return (0);

descripteur_fichier = open(filename, O_RDONLY);
if (descripteur_fichier == -1)
return (0);

tampon = malloc(sizeof(char) * letters);
if (tampon == NULL)
{
close(descripteur_fichier);
return (0);
}

nb_lus = read(descripteur_fichier, tampon, letters);
if (nb_lus == -1)
{
free(tampon);
close(descripteur_fichier);
return (0);
}

nb_ecrits = write(STDOUT_FILENO, tampon, nb_lus);
free(tampon);
close(descripteur_fichier);

if (nb_ecrits != nb_lus)
return (0);

return (nb_ecrits);
}

