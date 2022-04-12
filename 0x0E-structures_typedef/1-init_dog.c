/**
 * init_dog - init struct
 * @d: passing struct at the function
 * @name: store a string
 * @age: store a number
 * @owner: store a string
 */

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
