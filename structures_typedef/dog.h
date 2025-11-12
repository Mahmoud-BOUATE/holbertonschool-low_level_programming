#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure qui définit un chien
 * @name: nom du chien (chaîne de caractères)
 * @age: âge du chien (nombre flottant)
 * @owner: nom du propriétaire (chaîne de caractères)
 *
 * Descr: struc représentant les info principales d’un chien.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
