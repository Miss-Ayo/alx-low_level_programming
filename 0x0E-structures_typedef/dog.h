#ifndef DOG_H
#define DOG_H

/**
 * struct dog - list dates for pets
 * @name: pet name
 * @age: pet age
 * @owner: pet owner name
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog - rename struct
 */
typedef struct dog dog_t;
#endif
