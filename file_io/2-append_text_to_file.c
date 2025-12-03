#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file -ajouter à du contenu à la fin d'un fichier
 * @filename: nom du fichier à créer
 * @text_content: contenue à écrire
 *
 * Return: nombre réel de lettres lues et affichées, ou 0 en cas d'erreur
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, count, nb_ecrits;
count = 0;
char *ptr;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
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
































    return(1);
}