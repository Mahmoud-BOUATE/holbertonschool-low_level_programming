#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure qui définit un chien
 * @name: nom du chien (chaîne de caractères)
 * @age: âge du chien (nombre flottant)
 * @owner: nom du propriétaire (chaîne de caractères)
 *
 * Description: structure représentant les informations principales d’un chien.
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif /* DOG_H */
