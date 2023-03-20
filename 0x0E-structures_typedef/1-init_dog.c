#include "main.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog struct with the given values
 * @d: pointer to the dog struct to be initialized
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: This function initializes a dog struct with the given name,
 *              age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
